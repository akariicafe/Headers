@class NSUUID, NSNumber;

@interface HMDUserActionPredictionModel : HMBModel

@property (copy) NSUUID *predictionTargetUUID;
@property (copy) NSUUID *targetServiceUUID;
@property (copy) NSUUID *targetServiceGroupUUID;
@property (copy) NSUUID *targetGroupUUID;
@property (copy) NSNumber *type;
@property (copy) NSNumber *groupType;
@property (copy) NSNumber *predictionScore;

+ (id)hmbProperties;
+ (BOOL)hmbExcludeFromCloudStorage;

- (id)initWithUserActionPrediction:(id)a0;
- (id)userActionPrediction;

@end
