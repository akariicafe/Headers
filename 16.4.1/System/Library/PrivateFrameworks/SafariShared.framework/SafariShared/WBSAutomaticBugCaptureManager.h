@class SDRDiagnosticReporter;

@interface WBSAutomaticBugCaptureManager : NSObject {
    SDRDiagnosticReporter *_reporter;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)captureLoadingStallWithDomain:(id)a0 detectedProcess:(id)a1 context:(id)a2 duration:(double)a3;
- (void)_startLoggingSessionForDomain:(id)a0 detectedProcess:(id)a1 type:(id)a2 subType:(id)a3 context:(id)a4 duration:(double)a5;
- (void)captureDeferredNavigationWithDomain:(id)a0 detectedProcess:(id)a1 context:(id)a2;
- (void)captureLoadingStallWithDomain:(id)a0 detectedProcess:(id)a1 context:(id)a2;
- (void)capturePerformanceTimeoutWithDomain:(id)a0 detectedProcess:(id)a1 context:(id)a2;
- (void)captureProcessTerminationDueToResourceLimitsWithDomain:(id)a0 detectedProcess:(id)a1 resourceType:(id)a2;

@end
