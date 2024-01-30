@class NSObject, NSString, NSArray, DKReporterRegistry, DKReportPlanner, DKExtensionDiscovery;
@protocol OS_dispatch_queue;

@interface DKReportManager : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) DKReporterRegistry *registry;
@property (retain, nonatomic) DKReportPlanner *planner;
@property (retain, nonatomic) DKExtensionDiscovery *discovery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportManagerQueue;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) NSArray *availableReportGenerators;

- (id)init;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)cancelAllReports;
- (void)reportWithComponentPredicateManifest:(id)a0 completion:(id /* block */)a1;
- (void)reportersWithCompletion:(id /* block */)a0;
- (id)sendRequestsForGroup:(id)a0 concurrent:(BOOL)a1 failOnError:(BOOL)a2 error:(id *)a3;

@end
