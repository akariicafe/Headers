@class NSString, VCPVNImageprintWrapper;

@interface VCPPhotosFace : NSObject <PFPhotosFaceRepresentation>

@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (copy, nonatomic) NSString *personLocalIdentifier;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) short detectionType;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) double bodyCenterX;
@property (nonatomic) double bodyCenterY;
@property (nonatomic) double bodyWidth;
@property (nonatomic) double bodyHeight;
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
@property (nonatomic) unsigned long long algorithmVersion;
@property (nonatomic) long long clusterSequenceNumber;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic) unsigned short ageType;
@property (nonatomic) unsigned short sexType;
@property (nonatomic) unsigned short eyesState;
@property (nonatomic) unsigned short smileType;
@property (nonatomic) unsigned short facialHairType;
@property (nonatomic) unsigned short hairColorType;
@property (nonatomic) unsigned short glassesType;
@property (nonatomic) unsigned short expressionType;
@property (nonatomic) unsigned short headgearType;
@property (nonatomic) unsigned short hairType;
@property (nonatomic) unsigned short poseType;
@property (nonatomic) unsigned short skintoneType;
@property (nonatomic) unsigned short ethnicityType;
@property (nonatomic) BOOL hasFaceMask;
@property (nonatomic) unsigned short gazeType;
@property (nonatomic) double gazeCenterX;
@property (nonatomic) double gazeCenterY;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (retain, nonatomic) VCPVNImageprintWrapper *imageprintWrapper;
@property (nonatomic) double roll;
@property (nonatomic) double quality;

+ (id)faceWithLocalIdentifier:(id)a0;

- (id)initWithLocalIdentifier:(id)a0;
- (void).cxx_destruct;
- (long long)photosFaceRepresentationSourceWidth;
- (long long)photosFaceRepresentationSourceHeight;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationBlurScore;
- (BOOL)photosFaceRepresentationHasSmile;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (long long)photosFaceRepresentationQualityMeasure;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationQuality;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFaceRect;
- (BOOL)setCenterAndSizeFromNormalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)gistDescription;
- (void)replaceCoordinatesAndFeaturesFromDetectedFace:(id)a0;

@end
