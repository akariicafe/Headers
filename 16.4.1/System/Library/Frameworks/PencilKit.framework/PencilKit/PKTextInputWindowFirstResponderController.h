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

- (id)initWithNotificationCenter:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)keyboardSceneDelegate:(id)a0 inputViewSetVisibilityDidChange:(BOOL)a1 includedReset:(BOOL)a2;
- (void)_forceControllerToReload:(id)a0;
- (void)_handleTextInputSourceDidChange:(id)a0;
- (BOOL)_isResponderEditableTextInput:(id)a0;
- (void)_textInputResponderDidChangeNotificationHandler:(id)a0;
- (void)_updateFirstResponder:(id)a0 isVisible:(BOOL)a1 sendDelegateCallback:(BOOL)a2;
- (void)textInputSourceDidChange:(id)a0;
- (void)updateFirstResponderFromWindowScene:(id)a0 sendDelegateCallback:(BOOL)a1;

@end
