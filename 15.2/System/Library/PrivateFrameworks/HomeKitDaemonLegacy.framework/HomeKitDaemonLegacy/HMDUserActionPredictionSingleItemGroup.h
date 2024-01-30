@class HMUserActionPrediction, NSUUID, NSArray, NSString;

@interface HMDUserActionPredictionSingleItemGroup : HMFObject <HMDUserActionPredictionGroup>

@property (retain) HMUserActionPrediction *prediction;
@property (readonly, copy) NSUUID *groupUUID;
@property (readonly) double predictionScore;
@property (readonly, copy) NSArray *predictions;
@property (readonly, copy) HMUserActionPrediction *userActionRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPrediction:(id)a0;
- (void)updateWithPrediction:(id)a0;
- (BOOL)containsPrediction:(id)a0;
- (BOOL)shouldContainPrediction:(id)a0;

@end
