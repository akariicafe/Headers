@class WFNetworkScanRecord, NWPathEvaluator, WFInterface, WFNetworkProfile, NSSet, NSArray, WFDiagnosticsManager, NSObject;
@protocol OS_dispatch_queue, WFHealthManagerDelegate;

@interface WFHealthManager : NSObject

@property (retain, nonatomic) WFInterface *interface;
@property (retain, nonatomic) NSSet *currentNetworkIssues;
@property (retain, nonatomic) NWPathEvaluator *evaluator;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticsQueue;
@property (retain, nonatomic) WFDiagnosticsManager *diagnosticsManager;
@property (nonatomic) BOOL failNoInternetDiagnosticsTests;
@property (nonatomic) long long completedVelocityTestTimes;
@property (nonatomic) BOOL shouldFileNewMetrics;
@property (retain, nonatomic) NSArray *failedTestsIDs;
@property (readonly, nonatomic) BOOL currentNetworkHasNoInternetConnection;
@property (weak, nonatomic) id<WFHealthManagerDelegate> delegate;

- (id)initWithInterface:(id)a0;
- (void)linkQualityDidChange:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)runNoInternetDiagnosticsAfter:(long long)a0;
- (void)currentNetworkDidChange:(id)a0;
- (void)_updateCurrentNetworkIssues;
- (void)forceUpdateNetworkIssues;
- (void)runNoInternetDiagnostics;

@end
