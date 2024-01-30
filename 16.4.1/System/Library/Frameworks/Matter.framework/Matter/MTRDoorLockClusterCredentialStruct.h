@class NSNumber;

@interface MTRDoorLockClusterCredentialStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *credentialType;
@property (copy, nonatomic) NSNumber *credentialIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
