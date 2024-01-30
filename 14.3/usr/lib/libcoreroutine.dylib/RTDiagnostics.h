@class RTDefaultsManager, RTPlatform, NSMutableArray;

@interface RTDiagnostics : RTService {
    RTDefaultsManager *_defaultsManager;
    RTPlatform *_platform;
    NSMutableArray *_diagnosticProviders;
}

+ (BOOL)fileNameEligibleForCollection:(id)a0;
+ (id)createDiagnosticsURLWithError:(id *)a0;
+ (id)crashReports;
+ (id)stringFromDateWithFormat;
+ (BOOL)createArchiveSourceURL:(id)a0 destinationURL:(id)a1 error:(id *)a2;

- (void)_shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)fetchPathToDiagnosticFilesWithHandler:(id /* block */)a0;
- (id)initWithDefaultsManager:(id)a0 platform:(id)a1;
- (void)logProcessDiagnosticInformation;
- (void)addDiagnosticProvider:(id)a0;
- (void)fetchPathToBackupWithHandler:(id /* block */)a0;
- (id)_collectDiagnosticFilesWithError:(id *)a0;
- (void)_fetchPathToDiagnosticFilesWithHandler:(id /* block */)a0;
- (id)_collectBackupWithError:(id *)a0;
- (void)_fetchPathToBackupWithHandler:(id /* block */)a0;

@end
