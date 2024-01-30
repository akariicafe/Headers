@class NSString;

@interface HMIFaceprinter : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (long long)_minorVersionFromVisionVersion:(int)a0;
+ (struct __CVBuffer { } *)createFacePixelBufferForFaceDetection:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 roll:(id)a2 error:(id *)a3;
+ (struct __CVBuffer { } *)createFacePixelBufferForFaceEvent:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 roll:(id)a2 error:(id *)a3;
+ (id)currentModelUUID;

- (struct __CVBuffer { } *)createFacePixelBufferFromFaceCrop:(id)a0 error:(id *)a1;
- (id)createFaceprintForFacePixelBuffer:(struct __CVBuffer { } *)a0 fastMode:(BOOL)a1 error:(id *)a2;
- (id)generateFaceprintForFaceCrop:(id)a0 error:(id *)a1;
- (id)updatedFaceprintsForFaceCrops:(id)a0 withExistingFaceprints:(id)a1 error:(id *)a2;
- (void)warmStart;

@end
