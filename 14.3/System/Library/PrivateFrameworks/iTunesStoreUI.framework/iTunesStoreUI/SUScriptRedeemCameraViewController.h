@class NSString, WebScriptObject, SURedeemCameraViewController;

@interface SUScriptRedeemCameraViewController : SUScriptObject

@property (weak, nonatomic) SURedeemCameraViewController *redeemCameraViewController;
@property (retain, nonatomic) NSString *backButtonTitle;
@property (retain, nonatomic) WebScriptObject *codeHandler;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)present;
- (void).cxx_destruct;
- (id)attributeKeys;
- (id)_className;
- (void)dismiss;
- (id)scriptAttributeKeys;
- (void)_performAction:(long long)a0 withObject:(id)a1;
- (void)codeDetected:(id)a0;
- (void)pauseCamera;
- (void)recognitionError;
- (void)recognitionSuccess;
- (void)resumeCamera;

@end
