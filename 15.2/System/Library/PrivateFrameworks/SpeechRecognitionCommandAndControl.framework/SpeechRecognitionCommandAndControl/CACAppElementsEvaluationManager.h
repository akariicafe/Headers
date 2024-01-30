@class NSSet, NSString;

@interface CACAppElementsEvaluationManager : NSObject {
    NSSet *_appIdentifersForStandardFilter;
    NSString *_evaluatorOverrideClassName;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (Class)evaluatorClassForAppIdentifier:(id)a0;
- (id)_trimmedArrayOfActionableAXElements:(id)a0;
- (id)actionableAXElementsFromAXElements:(id)a0 forAppIdentifier:(id)a1;
- (BOOL)isRecognitionString:(id)a0 supportedForElement:(id)a1;

@end
