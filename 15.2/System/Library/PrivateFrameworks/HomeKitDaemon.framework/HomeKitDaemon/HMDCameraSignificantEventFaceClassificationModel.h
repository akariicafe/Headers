@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassificationModel : HMBModel

@property (retain) NSUUID *personManagerUUID;
@property (retain) NSUUID *personUUID;
@property (retain) NSString *personName;
@property (retain) NSUUID *unassociatedFaceCropUUID;

+ (id)hmbExternalRecordType;
+ (id)hmbProperties;

- (id)createFaceClassification;

@end
