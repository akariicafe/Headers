@class NSArray, HMHome, NSObject;
@protocol OS_dispatch_queue, HUCCPredictionController, HUCCPredictionManagerDelegate;

@interface HUCCPredictionManager : NSObject <HMUserActionPredictionControllerDelegate>

@property (retain, nonatomic) NSArray *predictions;
@property (retain, nonatomic) id<HUCCPredictionController> predictionController;
@property (nonatomic) unsigned long long predictionLimit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *predictionQueue;
@property (nonatomic) BOOL wasQueriedForInFlightPredictions;
@property (weak, nonatomic) id<HUCCPredictionManagerDelegate> delegate;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (void)userActionPredictionController:(id)a0 didUpdatePredictions:(id)a1;
- (id)fetchUserActionPredictions;
- (id)initWithHome:(id)a0 predictionController:(id)a1 delegate:(id)a2 predictionLimit:(unsigned long long)a3;
- (void)_queryUserActionPredictions;
- (void)_queryUserActionPredictionsOnQueue;
- (id)_processUserActionPredictions:(id)a0;
- (id)_homeKitObjectForSceneUUID:(id)a0;
- (id)_homeKitObjectForServiceUUID:(id)a0;
- (id)_homeKitObjectForAccessoryUUID:(id)a0;
- (id)_homeKitObjectForServiceGroupUUID:(id)a0;
- (id)_homeKitObjectForMediaSystemUUID:(id)a0;

@end
