@class NSArray;

@interface ATXAnchorModelSamplingGroup : NSObject

@property (readonly, nonatomic) NSArray *anchorWhitelist;
@property (readonly, nonatomic) long long samplingGroupId;

+ (id)getSamplingGroupForDataCollection;
+ (void)resetSamplingGroupAssignmentForUser;
+ (long long)assignSamplingGroupToUserAndPersistToDefaults:(id)a0;
+ (id)samplingGroupFromSamplingGroupId:(long long)a0;
+ (long long)selectSamplingGroupForUser;
+ (unsigned long long)numSamplingGroups;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAnchorWhitelist:(id)a0 samplingGroupId:(long long)a1;

@end
