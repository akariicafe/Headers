@interface LPLinkViewAccessibility : __LPLinkViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
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
