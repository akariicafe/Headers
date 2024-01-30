@class NSString, PVFaceprint;

@interface PVFace : PVObject <PFPhotosFaceRepresentation>

@property (copy, nonatomic) NSString *personLocalIdentifier;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) double leftEyeX;
@property (nonatomic) double leftEyeY;
@property (nonatomic) double rightEyeX;
@property (nonatomic) double rightEyeY;
@property (nonatomic) double mouthX;
@property (nonatomic) double mouthY;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL isInTrash;
@property (nonatomic) BOOL manual;
@property (nonatomic) BOOL isTooSmall;
@property (nonatomic) BOOL hasSmile;
@property (nonatomic) double blurScore;
@property (nonatomic) double exposureScore;
@property (nonatomic) BOOL isLeftEyeClosed;
@property (nonatomic) BOOL isRightEyeClosed;
@property (copy, nonatomic) NSString *adjustmentVersion;
@property (nonatomic) long long nameSource;
@property (nonatomic) int trainingType;
@property (nonatomic) double poseYaw;
@property (nonatomic) unsigned int faceAlgorithmVersion;
@property (nonatomic) long long clusterSequenceNumber;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic) NSString *ageType;
@property (nonatomic) NSString *sexType;
@property (nonatomic) NSString *eyesState;
@property (nonatomic) NSString *smileType;
@property (nonatomic) NSString *facialHairType;
@property (nonatomic) NSString *hairColorType;
@property (nonatomic) NSString *baldType;
@property (nonatomic) NSString *glassesType;
@property (nonatomic) NSString *eyeMakeupType;
@property (nonatomic) NSString *lipMakeupType;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (retain, nonatomic) PVFaceprint *faceprint;
@property (nonatomic) double roll;
@property (nonatomic) double quality;
@property (nonatomic) NSString *genderType;

+ (id)faceFromVNFaceObservation:(id)a0 fromImage:(id)a1 additionalVisionRequests:(id)a2 faceAlgorithmUmbrellaVersion:(unsigned int)a3 error:(id *)a4;
+ (id)faceFromVNFaceObservation:(id)a0 fromImageWithPixelWidth:(unsigned long long)a1 pixelHeight:(unsigned long long)a2 additionalVisionRequests:(id)a3 faceAlgorithmUmbrellaVersion:(unsigned int)a4 error:(id *)a5;
+ (id)faceWithFace:(id)a0 copyPropertiesOption:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFaceRect;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationQuality;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationBlurScore;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (BOOL)photosFaceRepresentationHasSmile;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (BOOL)setCenterAndSizeFromNormalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_copyPropertiesFrom:(id)a0 copyPropertiesOption:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })absoluteFaceRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })absoluteFaceRectForImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setCoordinatesAndFeaturesFromFace:(id)a0;

@end
