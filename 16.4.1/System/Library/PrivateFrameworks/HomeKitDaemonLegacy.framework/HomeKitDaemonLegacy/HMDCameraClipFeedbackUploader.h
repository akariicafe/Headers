@class NSString;

@interface HMDCameraClipFeedbackUploader : HMFObject <HMDCameraClipFeedbackUploader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)uploadFeedbackWithCameraProfileUUID:(id)a0 clipModel:(id)a1 completionHandler:(id /* block */)a2;

@end
