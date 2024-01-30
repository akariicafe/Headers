@class NSString, NSDictionary, NSUUID, HMIHomePersonManager, NSSet, HMIVideoAnalyzerConfiguration;
@protocol HMIVideoAnalyzerDelegate;

@interface HMIVideoAnalyzer : HMFObject

@property (readonly, copy) HMIVideoAnalyzerConfiguration *configuration;
@property (readonly, copy) NSDictionary *options;
@property (readonly) NSString *stateDescription;
@property (readonly) double delay;
@property (nonatomic) double analysisFPS;
@property (nonatomic) BOOL monitored;
@property (weak) id<HMIVideoAnalyzerDelegate> delegate;
@property (readonly) NSUUID *identifier;
@property (retain) HMIHomePersonManager *homePersonManager;
@property (retain) NSSet *externalPersonManagers;
@property (readonly) unsigned long long status;

+ (id)allowedClasses;
+ (id)analyzerWithConfiguration:(id)a0 identifier:(id)a1 legacy:(BOOL)a2 remote:(BOOL)a3 error:(id *)a4;
+ (id)analyzerWithOptions:(id)a0 error:(id *)a1;
+ (id)analyzerWithConfiguration:(id)a0 identifier:(id)a1 error:(id *)a2;

- (void)cancel;
- (void)finish;
- (void).cxx_destruct;
- (void)flushAsync;
- (void)flush;
- (id)initWithConfiguration:(id)a0 identifier:(id)a1;
- (void)analyzeFragment:(id)a0 configuration:(id)a1;
- (void)handleAssetData:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleAssetData:(id)a0 withOptions:(id)a1 errorHandler:(id /* block */)a2;
- (void)handleMessageWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
