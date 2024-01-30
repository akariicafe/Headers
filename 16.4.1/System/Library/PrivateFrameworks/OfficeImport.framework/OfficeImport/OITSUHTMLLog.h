@class NSString, NSFileHandle;

@interface OITSUHTMLLog : NSObject {
    NSFileHandle *_handle;
    BOOL _logStarted;
    unsigned long long _uniquifier;
    unsigned long long _tableRow;
}

@property (readonly, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *stylesheet;
@property (copy, nonatomic) NSString *script;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)close;
- (void)clear;
- (void)_writeMarkupData:(id)a0;
- (void)logBegin;
- (void)logEnd;
- (void)openInBrowser;
- (id)uniqueIdentifierWithPrefix:(id)a0;
- (void)writeMarkup:(id)a0;
- (void)writeText:(id)a0;

@end
