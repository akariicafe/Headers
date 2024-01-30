@class NSData, NSMutableSet;

@interface HMDCameraRecordingSessionFaceClassificationContext : HMFObject

@property (readonly) NSData *faceCropData;
@property (readonly) NSMutableSet *faceClassifications;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithFaceCropData:(id)a0;

@end
