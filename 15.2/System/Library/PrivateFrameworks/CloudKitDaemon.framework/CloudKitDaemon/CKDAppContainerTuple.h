@class CKContainerID, CKDApplicationID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying>

@property (readonly, nonatomic) CKDApplicationID *applicationID;
@property (readonly, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) NSString *personaID;

- (id)CKPropertiesDescription;
- (id)description;
- (id)initWithApplicationID:(id)a0 containerID:(id)a1 personaID:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
