@interface ICKeyboardNotificationListener : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;

+ (id)sharedListener;

- (id)init;
- (void)dealloc;
- (void)handleKeyboardWillShow:(id)a0;
- (void)handleKeyboardWillHide:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentKeyboardFrame;

@end
