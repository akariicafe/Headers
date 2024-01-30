@class NSString;

@interface WFDefaultShortcut : NSObject

@property (readonly, nonatomic, getter=isAlwaysVisibleOnWatch) BOOL alwaysVisibleOnWatch;
@property (readonly, nonatomic) NSString *identifier;

+ (id)allDefaultShortcuts;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (id)workflowRecordWithError:(id *)a0;
- (long long)relevanceWithContext:(id)a0;

@end
