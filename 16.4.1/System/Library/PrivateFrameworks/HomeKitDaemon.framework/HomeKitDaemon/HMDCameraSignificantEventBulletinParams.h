@class NSUUID, NSSet, NSDate;

@interface HMDCameraSignificantEventBulletinParams : HMFObject

@property (readonly, copy) NSUUID *UUID;
@property (readonly) unsigned long long reason;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly) unsigned long long confidenceLevel;
@property (readonly, copy) NSSet *faceClassifications;
@property (readonly, copy) NSUUID *cameraProfileUUID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSignificantEvent:(id)a0 cameraProfileUUID:(id)a1;
- (id)initWithUUID:(id)a0 reason:(unsigned long long)a1 dateOfOccurrence:(id)a2 confidenceLevel:(unsigned long long)a3 faceClassifications:(id)a4 cameraProfileUUID:(id)a5;

@end
