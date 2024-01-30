@interface HMIFeedback : HMFObject

+ (void)submitFeedbackWithCameraProfileUUID:(id)a0 clipUUID:(id)a1 completionHandler:(id /* block */)a2;
+ (void)submitFeedbackWithCameraProfileUUID:(id)a0 clipUUID:(id)a1 runRemotely:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
