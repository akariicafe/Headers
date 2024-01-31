@interface LPLinkViewAccessibility : __LPLinkViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (id)_axCaptionText;
- (void)_axFollowLink;
- (id)_axITunesPlayButton;
- (id)_axMediaViews;
- (id)_axMuteAction;
- (BOOL)_axPlayPause:(id)a0;

@end
