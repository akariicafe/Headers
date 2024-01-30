@class PFLTaskConfiguration, NSString, PFLNetworkResourceManager, NSObject;
@protocol PFLTaskDelegate, MLBatchProvider, PFLDataSource, OS_dispatch_queue, PFLTaskState;

@interface PFLTaskContainer : NSObject <NSSecureCoding, PFLTaskStateProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<PFLTaskState> state;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PFLTaskConfiguration *configuration;
@property (weak, nonatomic) id<PFLTaskDelegate> delegate;
@property (retain, nonatomic) id<MLBatchProvider> dataProvider;
@property (retain, nonatomic) PFLNetworkResourceManager *resourceManager;
@property (retain, nonatomic) id<PFLDataSource> metricsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionFromState:(unsigned long long)a0;
+ (id)loadFromSavedStateURL:(id)a0;

- (int)modelVersion;
- (id)taskIdentifier;
- (id)modelIdentifier;
- (void).cxx_destruct;
- (void)_saveState;
- (id)modelConfiguration;
- (id)initWithCoder:(id)a0;
- (void)resume;
- (id)layerNames;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (void)suspend;
- (void)encodeWithCoder:(id)a0;
- (id)metricsIdentifier;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1 state:(id)a2;
- (void)markStateTransition:(id)a0;
- (double)privatizationNormMax;
- (unsigned long long)privatizationNormBinCount;
- (double)validationSplit;
- (id)compiledModelURL;
- (id)uploadResultsIdentifier;

@end
