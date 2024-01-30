@class NSString, NSNotificationCenter, PKTextInputWindowFirstResponder, NSNotification;
@protocol PKTextInputWindowFirstResponderControllerDelegate;

@interface PKTextInputWindowFirstResponderController : NSObject <UIKeyboardSceneDelegateVisibilityObserver>

@property (retain, nonatomic) NSNotificationCenter *_notificationCenter;
@property (retain, nonatomic) PKTextInputWindowFirstResponder *firstResponder;
@property (retain, nonatomic) NSNotification *_delayedNotification;
@property (weak, nonatomic) id<PKTextInputWindowFirstResponderControllerDelegate> delegate;
@property (nonatomic) BOOL paletteFloatingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)keyboardSceneDelegate:(id)a0 inputViewSetVisibilityDidChange:(BOOL)a1 includedReset:(BOOL)a2;
- (id)initWithNotificationCenter:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)textInputSourceDidChange:(id)a0;
- (void)updateFirstResponderFromWindowScene:(id)a0;
- (void)_textInputResponderDidChangeNotificationHandler:(id)a0;
- (void)_forceControllerToReload:(id)a0;
- (BOOL)_isResponderEditableTextInput:(id)a0;
- (void)_notifyFirstResponder:(id)a0 isVisible:(BOOL)a1;

@end
