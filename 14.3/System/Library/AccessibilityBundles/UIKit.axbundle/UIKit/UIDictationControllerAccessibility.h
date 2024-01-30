@interface UIDictationControllerAccessibility : __UIDictationControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)stopDictation;
- (void)_updateFromSelectedTextRange:(id)a0 withNewHypothesis:(id)a1;
- (void)insertSerializedDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;
- (void)cancelDictation;
- (void)_createDictationPresenterWindowIfNecessary;
- (void)startDictation;

@end
