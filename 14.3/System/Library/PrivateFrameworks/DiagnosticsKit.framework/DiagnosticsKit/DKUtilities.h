@interface DKUtilities : NSObject

+ (id)extensionAttributes;
+ (id)acceptableDecoderClasses;
+ (id)inputsForDiagnostic:(id)a0 predicates:(id)a1 specifications:(id)a2 parameters:(id)a3;
+ (void)moveFilesToSharedContainerInMutableResult:(id)a0;
+ (Class)diagnosticInputsClassAttribute;
+ (id)inputsUsingClass:(Class)a0 diagnostic:(id)a1 predicates:(id)a2 specifications:(id)a3 parameters:(id)a4;
+ (id)_sharedParsingFailedError;
+ (id)_fetchItemProviderFromItems:(id)a0 withError:(id *)a1;

@end
