@class NSString, HKMCAnalysis, HDMCProfileExtension;

@interface HDMCAnalysisQueryServer : HDQueryServer <HDMCAnalysisManagerObserver> {
    HDMCProfileExtension *_profileExtension;
    HKMCAnalysis *_analysis;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void)analysisManager:(id)a0 didUpdateAnalysis:(id)a1;
- (void).cxx_destruct;
- (void)_queue_start;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (id)objectTypes;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_stop;
- (id)_analysisQueryClientProxy;
- (void)_handleAnalysis:(id)a0;

@end
