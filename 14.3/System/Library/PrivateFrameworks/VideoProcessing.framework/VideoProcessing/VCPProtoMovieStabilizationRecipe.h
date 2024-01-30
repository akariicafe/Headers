@interface VCPProtoMovieStabilizationRecipe : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _homographyParams;
    struct { long long *list; unsigned long long count; unsigned long long size; } _timeValues;
}

@property (nonatomic) float cropRectX;
@property (nonatomic) float cropRectY;
@property (nonatomic) float cropRectHeight;
@property (nonatomic) float cropRectWidth;
@property (nonatomic) float inputBoundsX;
@property (nonatomic) float inputBoundsY;
@property (nonatomic) float inputBoundsHeight;
@property (nonatomic) float inputBoundsWidth;
@property (nonatomic) float sourceSizeHeight;
@property (nonatomic) float sourceSizeWidth;
@property (nonatomic) int timeScale;
@property (readonly, nonatomic) unsigned long long timeValuesCount;
@property (readonly, nonatomic) long long *timeValues;
@property (readonly, nonatomic) unsigned long long homographyParamsCount;
@property (readonly, nonatomic) float *homographyParams;

+ (id)resultFromLegacyDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)clearTimeValues;
- (long long)timeValueAtIndex:(unsigned long long)a0;
- (void)addTimeValue:(long long)a0;
- (float)homographyParamsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)addHomographyParams:(float)a0;
- (void)setTimeValues:(long long *)a0 count:(unsigned long long)a1;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (void)clearHomographyParams;
- (void)setHomographyParams:(float *)a0 count:(unsigned long long)a1;

@end
