@interface LPLinkViewAccessibility : __LPLinkViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)_axFollowLink;
- (id)_axITunesPlayButton;
- (BOOL)_axPlayPause:(id)a0;
- (id)_axMuteAction;
- (id)_axMediaViews;

@end
