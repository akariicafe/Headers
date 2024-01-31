@class NSString;

@interface SFMagicHeadWheelViewAccessibility : __SFMagicHeadWheelViewAccessibility_super

@property (retain, nonatomic, getter=_axStatusText, setter=_axSetStatusText:) NSString *_axStatusText;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (void)pulseSelectedHead;
- (BOOL)updateSelectedHead:(id)a0;
- (void)_axAnnounceCurrentHeadForce:(BOOL)a0;
- (id)_axDisplayNameForCurrentHead;
- (BOOL)_axIsShowingHead;
- (id)_axPlaceholderView;

@end
