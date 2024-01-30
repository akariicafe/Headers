@class NSData, NSMutableSet;

@interface HMDCameraRecordingSessionFaceClassificationContext : HMFObject

@property (readonly) NSData *faceCropData;
@property (readonly) NSMutableSet *faceClassifications;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithFaceCropData:(id)a0;

@end
