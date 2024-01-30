@interface UIDictationControllerAccessibility : __UIDictationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)insertSerializedDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;
- (void)cancelDictation;
- (void)updateLastHypothesis:(id)a0 WithNewHypothesis:(id)a1;
- (void)_createDictationPresenterWindowIfNecessary;
- (void)startDictation;
- (void)stopDictation;

@end
