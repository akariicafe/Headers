@class UIViewController;
@protocol _UIKeyboardAutoRespondingScrollViewController;

@interface UIAutoRespondingScrollViewControllerKeyboardSupport : NSObject {
    UIViewController<_UIKeyboardAutoRespondingScrollViewController> *_viewController;
    unsigned char _viewIsDisappearing : 1;
    unsigned char _registeredForNotifications : 1;
}

@property (nonatomic) double adjustmentForKeyboard;
@property (nonatomic) BOOL viewIsDisappearing;
@property (nonatomic) BOOL registeredForNotifications;

- (id)initWithViewController:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (void)_keyboardDidShow:(id)a0;
- (void)_keyboardDidChangeFrame:(id)a0;
- (void)_keyboardWillShow:(id)a0;
- (void)_adjustScrollViewForKeyboardInfo:(id)a0;
- (void).cxx_destruct;
- (void)_keyboardDidHide:(id)a0;

@end
