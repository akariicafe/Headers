@class NSString, JSValue;
@protocol IKAppKeyboardBridge;

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard, _IKJSKeyboardProxy, _IKJSKeyboard>

@property (retain, nonatomic) id<IKAppKeyboardBridge> appBridge;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) JSValue *suggestions;
@property (copy, nonatomic) JSValue *hints;

- (void).cxx_destruct;
- (id)asPrivateIKJSKeyboard;
- (void)jsTextDidChange;
- (void)jsDidSelectHint:(id)a0;

@end
