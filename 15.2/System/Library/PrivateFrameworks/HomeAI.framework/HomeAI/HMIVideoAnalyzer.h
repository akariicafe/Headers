@class NSUUID, HMIVideoAnalyzerConfiguration, NSString, NSSet, HMIVideoAnalyzerState, NSDictionary, HMIVideoAnalyzerMutableReport, HMIHomePersonManager, HMIAnalysisStateManager;
@protocol HMIVideoAnalyzerDelegate;

@interface HMIVideoAnalyzer : HMFObject <HMFLogging>

@property (readonly, copy) NSDictionary *options;
@property (readonly, copy) HMIVideoAnalyzerConfiguration *configuration;
@property (readonly) HMIVideoAnalyzerState *state;
@property (readonly) double delay;
@property (nonatomic) double analysisFPS;
@property (nonatomic) BOOL monitored;
@property (nonatomic) BOOL encode;
@property (readonly) HMIVideoAnalyzerMutableReport *report;
@property (weak) id<HMIVideoAnalyzerDelegate> delegate;
@property (readonly) NSUUID *identifier;
@property (retain) HMIHomePersonManager *homePersonManager;
@property (retain) HMIAnalysisStateManager *analysisStateManager;
@property (retain) NSSet *externalPersonManagers;
@property (readonly) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (id)logCategory;
+ (id)analyzerWithConfiguration:(id)a0 identifier:(id)a1 error:(id *)a2;
+ (id)analyzerWithConfiguration:(id)a0 identifier:(id)a1 remote:(BOOL)a2 error:(id *)a3;
+ (id)analyzerWithOptions:(id)a0 error:(id *)a1;

- (void)finish;
- (void)flush;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)cancel;
- (void)flushAsync;
- (void)analyzeFragment:(id)a0 configuration:(id)a1;
- (id)initWithConfiguration:(id)a0 identifier:(id)a1;
- (void)handleAssetData:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleMessageWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)finalizeFragmentResult:(id)a0 homePersonManager:(id)a1 analysisStateManager:(id)a2;

@end
