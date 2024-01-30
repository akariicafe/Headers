@class NSNumber;

@interface PIValuesAtCapture : NSObject

@property (nonatomic) float aperture;
@property (nonatomic) float portraitStrength;
@property (retain, nonatomic) NSNumber *minimumAperture;
@property (retain, nonatomic) NSNumber *maximumAperture;
@property (nonatomic) unsigned long long portraitMajorVersion;
@property (nonatomic) unsigned long long portraitMinorVersion;
@property (nonatomic) struct { int major; int minor; } depthVersionInfo;

+ (id)valuesAtCaptureFromImageProperties:(id)a0 error:(out id *)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initFromMinAperture:(float)a0 maxAperture:(float)a1 aperture:(float)a2 portraitStrength:(float)a3 SDOFRenderingVerion:(int)a4 depthVersionInfo:(struct { int x0; int x1; })a5;

@end
