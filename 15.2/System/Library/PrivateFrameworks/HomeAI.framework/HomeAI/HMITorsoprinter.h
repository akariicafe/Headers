@class NSString;

@interface HMITorsoprinter : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)currentTorsoRequestRevision;
+ (id)currentModelUUID;
+ (struct __CVBuffer { } *)createTorsoPixelBufferForTorsoEvent:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;

- (id)torsoprintForTorsoPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
