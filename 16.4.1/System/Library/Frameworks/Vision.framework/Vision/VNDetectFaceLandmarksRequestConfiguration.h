@class NSNumber;

@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) BOOL refineMouthRegion;
@property (nonatomic) BOOL refineLeftEyeRegion;
@property (nonatomic) BOOL refineRightEyeRegion;
@property (nonatomic) BOOL performBlinkDetection;
@property (retain, nonatomic) NSNumber *cascadeStepCount;
@property (nonatomic) unsigned long long constellation;

+ (BOOL)revision:(unsigned long long)a0 supportsConstellation:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;

@end
