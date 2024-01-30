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

- (id)dataProvider;
- (id)modelConfiguration;
- (void)suspend;
- (id)compiledModelURL;
- (void).cxx_destruct;
- (void)resume;
- (id)layerNames;
- (void)resumeWithState:(id)a0;
- (double)validationSplit;
- (id)initWithModelAtURL:(id)a0 trainingData:(id)a1 configuration:(id)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)privatizationNormBinCount;
- (double)privatizationNormMax;

@end
