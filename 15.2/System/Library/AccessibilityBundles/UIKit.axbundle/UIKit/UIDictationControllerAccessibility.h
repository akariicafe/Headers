@interface UIDictationControllerAccessibility : __UIDictationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)stopDictation;
- (void)_createDictationPresenterWindowIfNecessary;
- (void)cancelDictation;
- (void)_updateFromSelectedTextRange:(id)a0 withNewHypothesis:(id)a1;
- (void)startDictation;
- (void)insertSerializedDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;

@end
