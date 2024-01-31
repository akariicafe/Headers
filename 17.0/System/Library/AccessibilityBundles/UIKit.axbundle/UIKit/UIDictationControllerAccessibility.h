@interface UIDictationControllerAccessibility : __UIDictationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_createDictationPresenterWindowIfNecessary;
- (void)setState:(int)a0;
- (void)insertSerializedDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;
- (void)updateLastHypothesis:(id)a0 WithNewHypothesis:(id)a1;
- (void)_axNotifyDictationStarted;
- (void)_axNotifyDictationStopped;

@end
