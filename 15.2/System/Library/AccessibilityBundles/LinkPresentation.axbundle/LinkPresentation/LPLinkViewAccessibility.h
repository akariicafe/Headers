@interface LPLinkViewAccessibility : __LPLinkViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (void)_axFollowLink;
- (id)_axITunesPlayButton;
- (BOOL)_axPlayPause:(id)a0;
- (id)_axMuteAction;
- (id)_axMediaViews;

@end
