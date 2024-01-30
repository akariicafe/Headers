@class NSString;

@interface HMIFaceUtilities : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)serializeJSONObject:(id)a0 url:(id)a1 error:(id *)a2;
+ (BOOL)saveFaceClassifications:(id)a0 videoId:(id)a1 fragmentId:(unsigned long long)a2 frameId:(id)a3 baseURL:(id)a4 error:(id *)a5;
+ (id)faceObservationsFromFaceprintsForClustering:(id)a0;
+ (id)faceObservationFromFaceprint:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })estimatePersonBoundingBoxFromFaceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)eventsWithPersonsAndFacesMergedFromEvents:(id)a0;


@end
