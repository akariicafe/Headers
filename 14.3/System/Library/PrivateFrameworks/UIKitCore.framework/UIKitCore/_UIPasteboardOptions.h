@class NSDate;

@interface _UIPasteboardOptions : NSObject

@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic, getter=isLocalOnly) BOOL localOnly;
@property (retain, nonatomic) NSDate *expirationDate;

+ (id)optionsWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)a0;

@end
