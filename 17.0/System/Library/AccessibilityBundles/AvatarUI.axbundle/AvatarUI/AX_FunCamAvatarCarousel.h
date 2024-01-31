@interface AX_FunCamAvatarCarousel : UIAccessibilityElement

@property (weak, nonatomic) id fcAVTPickerController;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInContainerSpace;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (id)initWithFunCamAvatarPickerController:(id)a0 accessibilityContainer:(id)a1;

@end
