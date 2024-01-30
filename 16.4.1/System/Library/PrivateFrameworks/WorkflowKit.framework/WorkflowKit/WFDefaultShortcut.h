@class NSString;

@interface WFDefaultShortcut : NSObject

@property (readonly, nonatomic, getter=isAlwaysVisibleOnWatch) BOOL alwaysVisibleOnWatch;
@property (readonly, nonatomic) NSString *identifier;

+ (id)allDefaultShortcuts;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)workflowRecordWithError:(id *)a0;
- (long long)relevanceWithContext:(id)a0;

@end
