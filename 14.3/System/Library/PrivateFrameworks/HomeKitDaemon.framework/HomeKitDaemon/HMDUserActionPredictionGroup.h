@class NSUUID, NSArray, HMUserActionPrediction, NSString, NSMutableArray;

@interface HMDUserActionPredictionGroup : HMFObject <HMDUserActionPredictionGroup> {
    double _maxScore;
}

@property (readonly, copy) NSMutableArray *mutablePredictions;
@property (readonly, copy) NSUUID *groupUUID;
@property (readonly) double predictionScore;
@property (readonly, copy) NSArray *predictions;
@property (readonly, copy) HMUserActionPrediction *userActionRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)targetGroupType;
- (id)initWithPredictions:(id)a0;
- (void)updateWithPrediction:(id)a0;
- (BOOL)containsPrediction:(id)a0;
- (BOOL)shouldContainPrediction:(id)a0;
- (void)_updateMaxScore;
- (unsigned long long)frameworkPredictionTypeForGroup;

@end
