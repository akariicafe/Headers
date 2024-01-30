@class NSUUID, NSString, NSArray;

@interface HMUserActionPrediction : NSObject <HMFLogging, HMFObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *targetGroupUUID;
@property (readonly) unsigned long long targetGroupType;
@property (readonly, copy) NSUUID *predictionTargetUUID;
@property (readonly, copy) NSUUID *targetServiceUUID;
@property (readonly) unsigned long long predictionType;
@property (readonly) double predictionScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)shortDescription;

- (BOOL)isEqualIgnoringScore:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPredictionTargetUUID:(id)a0 predictionType:(unsigned long long)a1 predictionScore:(double)a2;
- (id)initWithPredictionTargetUUID:(id)a0 targetServiceUUID:(id)a1 predictionType:(unsigned long long)a2 predictionScore:(double)a3;
- (id)initWithPredictionTargetUUID:(id)a0 targetServiceUUID:(id)a1 targetGroupUUID:(id)a2 targetGroupType:(unsigned long long)a3 predictionType:(unsigned long long)a4 predictionScore:(double)a5;
- (BOOL)isEqual:(id)a0 ignoreScore:(BOOL)a1 ignoreGroupProperties:(BOOL)a2;
- (id)initWithPredictionTargetUUID:(id)a0 targetServiceUUID:(id)a1 targetServiceGroupUUID:(id)a2 predictionType:(unsigned long long)a3 predictionScore:(double)a4;
- (id)copyRemovingGroup;
- (BOOL)isEqualIgnoringScoreAndGroupProperties:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
