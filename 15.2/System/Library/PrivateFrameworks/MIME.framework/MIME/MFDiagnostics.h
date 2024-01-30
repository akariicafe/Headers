@class NSString, NSLock, MFWeakSet;

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator> {
    MFWeakSet *_diagnosticsGenerators;
    NSLock *_diagnosticLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)addDiagnosticsGenerator:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyDiagnosticInformation;
- (void)removeDiagnosticsGenerator:(id)a0;

@end
