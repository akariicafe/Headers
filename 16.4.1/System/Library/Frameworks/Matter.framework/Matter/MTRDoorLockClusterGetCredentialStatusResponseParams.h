@class NSNumber;

@interface MTRDoorLockClusterGetCredentialStatusResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *credentialExists;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *creatorFabricIndex;
@property (copy, nonatomic) NSNumber *lastModifiedFabricIndex;
@property (copy, nonatomic) NSNumber *nextCredentialIndex;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
