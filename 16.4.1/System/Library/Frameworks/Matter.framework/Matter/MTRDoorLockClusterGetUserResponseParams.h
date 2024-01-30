@class NSNumber, NSString, NSArray;

@interface MTRDoorLockClusterGetUserResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *userUniqueId;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSNumber *userUniqueID;
@property (copy, nonatomic) NSNumber *userStatus;
@property (copy, nonatomic) NSNumber *userType;
@property (copy, nonatomic) NSNumber *credentialRule;
@property (copy, nonatomic) NSArray *credentials;
@property (copy, nonatomic) NSNumber *creatorFabricIndex;
@property (copy, nonatomic) NSNumber *lastModifiedFabricIndex;
@property (copy, nonatomic) NSNumber *nextUserIndex;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
