@class UIColor, UISwitchVisualElement, NSString, UIImage, UIImpactFeedbackGenerator;

@interface UISwitch : UIControl <UISwitchControl, UISwitchVisualElementProvider, NSCoding>

@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UISwitchVisualElement *visualElement;
@property (nonatomic, getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:) BOOL alwaysShowOnOffLabel;
@property (retain, nonatomic, getter=_impactFeedbackGenerator, setter=_setImpactFeedbackGenerator:) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic) long long switchStyle;
@property (retain, nonatomic) UIColor *onTintColor;
@property (retain, nonatomic) UIColor *thumbTintColor;
@property (retain, nonatomic) UIImage *onImage;
@property (retain, nonatomic) UIImage *offImage;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;
@property (nonatomic) long long preferredStyle;
@property (nonatomic, getter=isOn) BOOL on;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_allowsUnsupportedMacIdiomBehavior;
+ (id)visualElementForTraitCollection:(id)a0;
+ (void)setVisualElementProvider:(id)a0;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)a0;
+ (id)visualElementForTraitCollection:(id)a0 style:(long long)a1;

- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (BOOL)_shouldShowOnOffLabels;
- (void)tintColorDidChange;
- (id)init;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)_populateArchivedSubviews:(id)a0;
- (BOOL)isAccessibilityElementByDefault;
- (void)cursorInteraction:(id)a0 willEnterRegion:(id)a1;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)_isFixedSize;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0;
- (void)cursorInteraction:(id)a0 willExitRegion:(id)a1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_setStyle:(long long)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)_refreshVisualElement;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1 notifyingVisualElement:(BOOL)a2;
- (void)visualElementHadTouchUpInside:(id)a0;
- (void)visualElement:(id)a0 transitionedToOn:(BOOL)a1;
- (unsigned long long)defaultAccessibilityTraits;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_refreshVisualElementForTraitCollection:(id)a0 populatingAPIProperties:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)encodeWithCoder:(id)a0;
- (void)_showingOnOffLabelChanged;

@end
