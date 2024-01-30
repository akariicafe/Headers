@class NSUUID, NSString;

@interface HMDMutableCameraSignificantEventFaceClassification : HMDCameraSignificantEventFaceClassification

@property (copy) NSUUID *personUUID;
@property (copy) NSString *personName;
@property (copy) NSUUID *unassociatedFaceCropUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
