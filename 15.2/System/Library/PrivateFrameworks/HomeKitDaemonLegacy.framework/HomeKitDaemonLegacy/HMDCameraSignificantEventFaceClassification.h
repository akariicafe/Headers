@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassification : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSUUID *personUUID;
@property (copy) NSString *personName;
@property (copy) NSUUID *unassociatedFaceCropUUID;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSUUID *personManagerUUID;

+ (id)faceClassificationWithHMIFaceClassification:(id)a0 person:(id)a1;

- (id)attributeDescriptions;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0 personManagerUUID:(id)a1;

@end
