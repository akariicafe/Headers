@class HMUserActionPredictionProvider, NSUUID, NSString;

@interface HMUserActionPredictionController_FrameworkImpl : HMUserActionPredictionController <HMUserActionPredictionSubscriber, HMFLogging>

@property (readonly) HMUserActionPredictionProvider *predictionProvider;
@property (readonly, copy) NSUUID *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)predictions;
- (void)didUpdatePredictions:(id)a0 forHomeWithIdentifier:(id)a1;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithHomeIdentifier:(id)a0 predictionProvider:(id)a1;
- (void)fetchPredictionsWithCompletion:(id /* block */)a0;

@end
