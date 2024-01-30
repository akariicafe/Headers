@interface PFVideoAdjustments : PFAssetAdjustments

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } slowMotionRampIn;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } slowMotionRampOut;
@property (readonly, nonatomic) float slowMotionRate;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } slowMotionTimeRange;
@property (nonatomic) float slowMotionRate;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } slowMotionTimeRange;

+ (float)defaultSlowMotionRateForNominalFrameRate:(float)a0;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })defaultSlowMotionTimeRangeForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (id)defaultSlowMotionAdjustmentsForAsset:(id)a0;
+ (BOOL)isRecognizedSlowMotionFormatWithIdentifier:(id)a0 version:(id)a1;
+ (id)defaultVideoAdjustmentsURLForVideoURL:(id)a0;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })convertToOriginalTimeFromScaledTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forExport:(BOOL)a1;
- (BOOL)hasSlowMotionAdjustments;
- (id)description;
- (id)initWithSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rate:(float)a1;
- (id)initWithPropertyListDictionary:(id)a0;
- (BOOL)isRecognizedFormat;
- (void)_updateDerivedPropertiesFromVersionedData;
- (BOOL)_parseLegacySLMDictionary:(id)a0 forSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 rate:(float *)a2;
- (BOOL)_parseVersionedDataForSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 rate:(float *)a1;
- (BOOL)_parseAppleVideoDataBlobDictionary:(id)a0 forSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 rate:(float *)a2;
- (id)_dictionaryFromSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rate:(float)a1;
- (id)_adjustmentsObjectFromNSKeyedArchiverData:(id)a0;
- (BOOL)_isValidSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rate:(float)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })convertToScaledTimeFromOriginalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forExport:(BOOL)a1;

@end
