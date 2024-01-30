@class NSString;

@interface HMUserActionPredictionTransformer : NSObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)isValidPredictionForAccessory:(id)a0 targetServiceIdentifier:(id)a1;
- (id)matchingAccessoryForDuetAccessoryPrediction:(id)a0 home:(id)a1;
- (id)matchingServiceForDuetAccessoryPrediction:(id)a0 onAccessory:(id)a1 home:(id)a2;
- (id)predictionForDuetAccessoryPrediction:(id)a0 home:(id)a1;
- (id)predictionForDuetScenePrediction:(id)a0 home:(id)a1;
- (id)predictionWithSameTargetGroupAsPrediction:(id)a0 inPredictions:(id)a1;
- (id)predictionsWithDuetPredictions:(id)a0 forHome:(id)a1;

@end
