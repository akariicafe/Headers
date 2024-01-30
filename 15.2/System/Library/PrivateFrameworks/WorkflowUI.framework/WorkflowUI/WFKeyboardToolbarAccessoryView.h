@class NSArray, NSString, UIToolbar;

@interface WFKeyboardToolbarAccessoryView : UIInputView <UIInputViewAudioFeedback>

@property (readonly, nonatomic) UIToolbar *toolbar;
@property (copy, nonatomic) NSArray *barItems;
@property (readonly, nonatomic) BOOL enableInputClicksWhenVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)flexibleSpaceItem;
- (id)fixedSpaceItemOfWidth:(double)a0;
- (BOOL)isPhoneUI;
- (void)appendBarItem:(id)a0;
- (void)prependBarItem:(id)a0;
- (void)removeAllBarItems;
- (double)borderedButtonWidthForButtonTitle:(id)a0 font:(id)a1;
- (double)keyboardButtonHeight;
- (double)inverseToolbarPadding;
- (id)plainButtonItemWithTitle:(id)a0 bolded:(BOOL)a1 target:(id)a2 action:(SEL)a3;
- (id)borderedButtonItemWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (id)buttonImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawRoundedRectangleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withContext:(struct CGContext { } *)a1 color:(id)a2 radius:(double)a3;

@end
