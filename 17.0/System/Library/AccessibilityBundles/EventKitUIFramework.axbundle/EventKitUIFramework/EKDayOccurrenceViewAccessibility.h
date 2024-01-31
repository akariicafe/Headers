@class NSValue;

@interface EKDayOccurrenceViewAccessibility : __EKDayOccurrenceViewAccessibility_super

@property (weak, nonatomic, getter=_axRealFrameInSuperview, setter=_axSetRealFrameInSuperview:) NSValue *axRealFrameInSuperview;
@property (retain, nonatomic, getter=_axDropPointDescriptorsProvider, setter=_axSetDropPointDescriptorsProvider:) id axDropPointDescriptorsProvider;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (void)setDrawsResizeHandles:(BOOL)a0;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityUserInputLabels;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (BOOL)_accessibilityIsSpeakThisElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForScrolling;
- (id)_axDraggingView;
- (BOOL)_accessibilityIsInWidget;
- (BOOL)_axIsInPreview;
- (id)_axWidgetContainerView;

@end
