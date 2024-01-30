@class NSArray, NSString, NSObject, HMHome;
@protocol HFPredictionsController, OS_dispatch_queue, HFPredictionsManagerDelegate;

@interface HFPredictionsManager : NSObject <HMUserActionPredictionControllerDelegate>

@property (retain, nonatomic) NSArray *predictions;
@property (retain, nonatomic) id<HFPredictionsController> predictionsController;
@property (nonatomic) unsigned long long predictionLimit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *predictionQueue;
@property (nonatomic) BOOL wasQueriedForInFlightPredictions;
@property (weak, nonatomic) id<HFPredictionsManagerDelegate> delegate;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)userActionPredictionController:(id)a0 didUpdatePredictions:(id)a1;
- (id)initWithHome:(id)a0 predictionsController:(id)a1 delegate:(id)a2 predictionLimit:(unsigned long long)a3;
- (void)_queryUserActionPredictions;
- (void)_queryUserActionPredictionsOnQueue;
- (id)_processUserActionPredictions:(id)a0;
- (id)_homeKitObjectForSceneUUID:(id)a0;
- (id)_homeKitObjectForServiceUUID:(id)a0;
- (id)_homeKitObjectForAccessoryUUID:(id)a0;
- (id)_homeKitObjectForServiceGroupUUID:(id)a0;
- (id)_homeKitObjectForMediaSystemUUID:(id)a0;
- (id)fetchUserActionPredictions;

@end
