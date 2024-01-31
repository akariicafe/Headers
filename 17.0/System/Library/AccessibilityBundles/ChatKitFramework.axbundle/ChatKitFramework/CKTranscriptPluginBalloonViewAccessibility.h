@interface CKTranscriptPluginBalloonViewAccessibility : __CKTranscriptPluginBalloonViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (long long)accessibilityContainerType;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityMediaAnalysisFrame;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (id)_axAppClipDescriptionForMetadata:(id)a0;
- (void)_axAppClipOpenInSafari;
- (id)_axBalloonViewCustomActions;
- (void)_axClear;
- (id)_axHandwritingDescriptionForDataSource:(id)a0;
- (BOOL)_axIsAppClip;
- (BOOL)_axIsAttachedHandwritingPlugin;
- (BOOL)_axIsAttachedPlugin;
- (BOOL)_axIsHandwriting;
- (BOOL)_axIsURL;

@end
