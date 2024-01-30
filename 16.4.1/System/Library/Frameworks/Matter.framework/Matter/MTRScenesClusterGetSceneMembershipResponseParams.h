@class NSNumber, NSArray;

@interface MTRScenesClusterGetSceneMembershipResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *capacity;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSArray *sceneList;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
