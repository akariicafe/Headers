@class NSString, NSFileHandle;

@interface TSUHTMLLog : NSObject {
    NSFileHandle *_handle;
    BOOL _logStarted;
    unsigned long long _uniquifier;
    unsigned long long _tableRow;
}

@property (readonly, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *stylesheet;
@property (copy, nonatomic) NSString *script;

- (void)clear;
- (id)initWithPath:(id)a0;
- (void)close;
- (void)dealloc;
- (void)logEnd;
- (void)logBegin;
- (void)_writeMarkupData:(id)a0;
- (void)writeMarkup:(id)a0;
- (id)uniqueIdentifierWithPrefix:(id)a0;
- (void)writeText:(id)a0;
- (void)openInBrowser;

@end
