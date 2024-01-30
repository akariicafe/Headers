@interface PKDiagnostics : NSObject

+ (id)_allPasses;
+ (id)_secureElementData;
+ (id)_metadataForCardAtURL:(id)a0;
+ (void)_createDiagnosticJsonWithDictionary:(id)a0 hasLibrary:(BOOL)a1 completion:(id /* block */)a2;
+ (void)generateDiagnosticsPackageWithPassLibrary:(BOOL)a0 completion:(id /* block */)a1;
+ (void)generateZippedDiagnosticsPackageWithPassLibrary:(BOOL)a0 completion:(id /* block */)a1;
+ (id)generateUbiquityDiagnosticsFile:(BOOL)a0;
+ (void)saveTransitState:(id)a0 forPaymentApplication:(id)a1;

@end
