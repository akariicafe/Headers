@class NSString;

@interface HMIFaceUtilities : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageCreationOptions;
+ (id)logCategory;
+ (struct CGSize { double x0; double x1; })faceCropDimensionsFromFaceCrop:(id)a0 error:(id *)a1;
+ (BOOL)isValidFaceCrop:(id)a0;
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })absoluteFaceBoxFromPhotosFaceCropImageData:(id)a0;
+ (id)croppedJpegDataFromFaceCrop:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceBoundingBoxFromPhotosFaceCropData:(id)a0;
+ (id)faceObservationFromFaceprint:(id)a0;
+ (id)faceObservationFromTorsoprint:(id)a0;
+ (id)faceObservationsFromFaceprintsForClustering:(id)a0;
+ (unsigned long long)faceprintDefaultRevision;
+ (id)mergedPersonEventsFromEvents:(id)a0;
+ (BOOL)saveFaceClassifications:(id)a0 videoId:(id)a1 fragmentId:(unsigned long long)a2 frameId:(id)a3 baseURL:(id)a4 error:(id *)a5;
+ (BOOL)serializeJSONObject:(id)a0 url:(id)a1 error:(id *)a2;


@end
