@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassificationModel : HMBModel

@property (retain) NSUUID *personManagerUUID;
@property (retain) NSUUID *personUUID;
@property (retain) NSString *personName;
@property (retain) NSUUID *unassociatedFaceCropUUID;

+ (id)hmbProperties;
+ (id)hmbExternalRecordType;

- (id)createFaceClassification;

@end
