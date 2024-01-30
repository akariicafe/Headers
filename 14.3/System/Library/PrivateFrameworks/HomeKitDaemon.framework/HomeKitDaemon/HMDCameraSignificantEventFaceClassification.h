@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassification : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSUUID *personUUID;
@property (copy) NSString *personName;
@property (copy) NSUUID *unassociatedFaceCropUUID;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSUUID *personManagerUUID;

+ (id)faceClassificationWithHMIFaceClassification:(id)a0 person:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 personManagerUUID:(id)a1;

@end
