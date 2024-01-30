@class NSArray, NSString;

@interface VNGenerateFaceSegmentsRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (nonatomic) float faceBoundingBoxExpansionRatio;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (Class)configurationClass;

@end
