@class NSURL, PFLUpdateConfiguration, NSString;
@protocol MLBatchProvider, PFLTaskState;

@interface PFLPartialSession : NSObject <PFLResumable, PFLTaskStateProvider>

@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) id<MLBatchProvider> trainingData;
@property (readonly, nonatomic) PFLUpdateConfiguration *configuration;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id<PFLTaskState> currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)modelConfiguration;
- (id)dataProvider;
- (void)resume;
- (id)layerNames;
- (void)suspend;
- (void)resumeWithState:(id)a0;
- (double)privatizationNormMax;
- (unsigned long long)privatizationNormBinCount;
- (double)validationSplit;
- (id)compiledModelURL;
- (id)initWithModelAtURL:(id)a0 trainingData:(id)a1 configuration:(id)a2 completionHandler:(id /* block */)a3;

@end
