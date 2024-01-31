@interface AX_AvatarCarousel : UIAccessibilityElement

@property (weak, nonatomic) id messagesController;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInContainerSpace;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (BOOL)_accessibilitySupportsActivateAction;
- (long long)_axCurrentIndex;
- (id)_axContainerAvatarController;
- (BOOL)_axMessagesControllerIsExpanded;
- (BOOL)_accessibilityScrollCarousel:(BOOL)a0;
- (void)_setAXCurrentIndex:(long long)a0;
- (id)initWithMessagesController:(id)a0 accessibilityContainer:(id)a1;

@end
