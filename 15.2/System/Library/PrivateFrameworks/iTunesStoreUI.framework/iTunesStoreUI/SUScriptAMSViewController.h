@class SUScriptAccount, NSString;

@interface SUScriptAMSViewController : SUScriptViewController

@property (retain, nonatomic) SUScriptAccount *primaryAccount;
@property (copy, nonatomic) NSString *DSID;
@property (copy, nonatomic) NSString *URL;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (void).cxx_destruct;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (id)initWithPrimaryAccount:(id)a0;

@end
