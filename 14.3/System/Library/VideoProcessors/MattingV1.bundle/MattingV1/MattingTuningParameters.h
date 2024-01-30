@interface MattingTuningParameters : NSObject

@property (nonatomic) struct { unsigned int internalWidth; unsigned int internalHeight; unsigned int spatialRadius; unsigned int temporalRadius; unsigned int arrayLength; float epsilon; BOOL disableForSameResolution; } mattingFilterConfig1;
@property (nonatomic) struct { unsigned int internalWidth; unsigned int internalHeight; float farCutOffBegin; float farCutOffEnd; unsigned int dilationRadius; float dilationPower; BOOL enabled; float zeroShiftPercentile; } focalPlaneRestrictionConfig;
@property (nonatomic) struct { unsigned int internalWidth; unsigned int internalHeight; unsigned int radius; unsigned int subsampling; float epsilon; unsigned int iterations; BOOL useDepthFilter; float fgThresholdValue; float bgThresholdValue; unsigned int erosionKernelSize; unsigned int resolutionMode; } mattingSolverConfig;
@property (nonatomic) struct { unsigned int internalWidth; unsigned int internalHeight; unsigned int spatialRadius; unsigned int temporalRadius; unsigned int arrayLength; float epsilon; BOOL disableForSameResolution; } mattingFilterConfig2;

- (id)initWithDefaults;
- (id)initWithTuningDictionary:(id)a0;
- (int)readMattingFilterConfigDict:(id)a0 mattingFilterConfig:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; BOOL x6; } *)a1;
- (int)readFocalPlaneRestrictionConfig:(id)a0;
- (int)readMattingConfig:(id)a0;

@end
