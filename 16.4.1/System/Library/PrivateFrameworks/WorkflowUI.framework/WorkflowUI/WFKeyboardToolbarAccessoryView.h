@class NSArray, NSString, UIToolbar;

@interface WFKeyboardToolbarAccessoryView : UIInputView <UIInputViewAudioFeedback>

@property (readonly, nonatomic) UIToolbar *toolbar;
@property (copy, nonatomic) NSArray *barItems;
@property (readonly, nonatomic) BOOL enableInputClicksWhenVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPhoneUI;
- (id)init;
- (void).cxx_destruct;
- (id)fixedSpaceItemOfWidth:(double)a0;
- (id)flexibleSpaceItem;
- (void)prependBarItem:(id)a0;
- (void)appendBarItem:(id)a0;
- (id)borderedButtonItemWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (double)borderedButtonWidthForButtonTitle:(id)a0 font:(id)a1;
- (id)buttonImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawRoundedRectangleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withContext:(struct CGContext { } *)a1 color:(id)a2 radius:(double)a3;
- (double)inverseToolbarPadding;
- (double)keyboardButtonHeight;
- (id)plainButtonItemWithTitle:(id)a0 bolded:(BOOL)a1 target:(id)a2 action:(SEL)a3;
- (void)removeAllBarItems;

@end
