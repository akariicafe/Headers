@class NSString, HKMCAnalysis, HKMCAnalysisQueryConfiguration, HDMCProfileExtension;

@interface HDMCAnalysisQueryServer : HDQueryServer <HDMCAnalysisManagerObserver> {
    HDMCProfileExtension *_profileExtension;
    HKMCAnalysisQueryConfiguration *_configuration;
    HKMCAnalysis *_analysis;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (Class)queryClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void)_queue_start;
- (void)_queue_stop;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (id)objectTypes;
- (void).cxx_destruct;
- (void)analysisManager:(id)a0 didUpdateAnalysis:(id)a1;
- (id)_analysisQueryClientProxy;
- (void)_handleAnalysis:(id)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 profileExtension:(id)a4;

@end
