@class NSNumber;

@interface SUScriptReportAProblemViewController : SUScriptViewController

@property (readonly) NSNumber *adamID;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)setAdamID:(id)a0;
- (id)_className;
- (id)init;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (id)initWithAdamID:(id)a0 clientInterface:(id)a1;

@end
