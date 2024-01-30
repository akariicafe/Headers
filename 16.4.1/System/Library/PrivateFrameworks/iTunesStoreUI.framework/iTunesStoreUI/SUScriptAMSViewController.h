@class SUScriptAccount, NSString;

@interface SUScriptAMSViewController : SUScriptViewController

@property (retain, nonatomic) SUScriptAccount *primaryAccount;
@property (copy, nonatomic) NSString *DSID;
@property (copy, nonatomic) NSString *URL;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void).cxx_destruct;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithPrimaryAccount:(id)a0;
- (id)newNativeViewController;

@end
