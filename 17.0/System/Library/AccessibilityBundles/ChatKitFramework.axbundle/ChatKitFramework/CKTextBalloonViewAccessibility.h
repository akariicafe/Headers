@interface CKTextBalloonViewAccessibility : __CKTextBalloonViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)accessibilityUserInputLabels;
- (id)accessibilityCustomRotors;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)invisibleInkEffectViewWasUncovered;
- (id)_accessibilityElementHelp;
- (id)_accessibilitySpeakThisString;
- (BOOL)_allowCustomActionHintSpeakOverride;
- (id)accessibilityVisibleText;
- (id)_axMessageProvenanceDescription;
- (id)_axInvisibleInkDescription;
- (BOOL)_axIsInvisibleInk;
- (id)_axMainContentStringForSpeakThis:(BOOL)a0;
- (id)_axMentionsDescription;
- (id)_axReplyDescription;
- (void)_setAXInvisibleInkDescription:(id)a0;

@end
