@class NSString, TRIClient, NSObject;
@protocol OS_dispatch_queue;

@interface SRUIFTrialManager : NSObject {
    int _trialProjectId;
    TRIClient *_trialClient;
    NSString *_trialNamespaceName;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_initializeTrialClient;
- (id)_levelForFactor:(id)a0;
- (void)_refreshTreatments;
- (void)boolValueForFactor:(id)a0 defaultValue:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithNamespace:(id)a0;
- (id)initWithNamespace:(id)a0 projectId:(int)a1;

@end
