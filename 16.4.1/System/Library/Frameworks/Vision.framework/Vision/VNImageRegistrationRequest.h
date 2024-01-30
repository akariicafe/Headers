@class VNImageBuffer, VNImageRegistrationSignature;

@interface VNImageRegistrationRequest : VNTargetedImageRequest {
    VNImageBuffer *_cachedFloatingImageBuffer;
    VNImageRegistrationSignature *_cachedFloatingImageSignature;
}

- (BOOL)wantsSequencedRequestObservationsRecording;
- (void).cxx_destruct;
- (BOOL)allowsCachingOfResults;
- (id)cachedFloatingImageBufferReturningError:(id *)a0;
- (id)cachedFloatingImageRegistrationSignatureReturningError:(id *)a0;
- (BOOL)getReferenceImageBuffer:(id *)a0 registrationSignature:(id *)a1 forRequestPerformingContext:(id)a2 error:(id *)a3;

@end
