@class NSArray, NSString;

@interface VNDetectFaceGazeRequest : VNImageBasedRequest <VNFaceObservationAccepting, VNImageIdealImageSizeProviding>

@property (readonly, copy) NSArray *results;
@property (nonatomic) float gazeHeatMapThreshold;
@property (nonatomic) float minimumFaceDimension;
@property (nonatomic) float commonGazeLocationRadius;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *supportedImageSizeSet;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (Class)configurationClass;
+ (unsigned long long)compatibleRevisionForDependentRequestOfClass:(Class)a0 beingPerformedByRevision:(unsigned long long)a1;

@end
