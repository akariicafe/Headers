@class NSString, NSDictionary;

@interface PRSL2FeatureVector : NSObject <NSCopying> {
    struct PRSL2FeatureScoreSmallCache { unsigned short features[32]; float scores[32]; unsigned short count; } _cache;
    void *_featureData;
    unsigned short _featureDataSize;
    unsigned char _flags;
    unsigned char _values;
}

@property (nonatomic) float originalL2Score;
@property (nonatomic) float experimentalScore;
@property (nonatomic) float withinBundleScore;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *device_type;
@property (retain, nonatomic) NSDictionary *searchThroughCEPData;
@property (nonatomic) unsigned __int128 indexScore;
@property (nonatomic) BOOL displayNameFuzzySpecialInsertion;
@property (nonatomic) BOOL isSiriAction;
@property (nonatomic) BOOL isAppInDock;
@property (readonly, nonatomic) BOOL vipSenderMatchesQuery;
@property (readonly, nonatomic) BOOL senderIsVip;
@property (readonly, nonatomic) BOOL receiverIsVip;
@property (retain, nonatomic) NSDictionary *roundTripFeatures;

+ (void)initialize;
+ (struct FeatureInfo { id x0; unsigned short x1; unsigned char x2; } *)featureForName:(id)a0;
+ (id)contextWithFeatureOrder:(id)a0 withInflation:(unsigned long long)a1 withInflatedIndexToSize:(id)a2;
+ (struct __CFSet { } *)getL2FeatureSet;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cleanup;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (float *)getAllScores:(float[1542])a0;
- (float)scoreForFeature:(unsigned short)a0;
- (void)setScores:(float *)a0 forFeatures:(unsigned short *)a1 count:(unsigned long long)a2;
- (BOOL)serializeToJSON:(void *)a0 options:(long long)a1;
- (id)_dictionaryRepresentationWithoutDefaultValues:(BOOL)a0;
- (void)swapAllLastUsedDateFeatures:(float *)a0;
- (void)swapAllContentCreationDateFeatures:(float *)a0;
- (void)swapAllRecenyFeatures:(float *)a0;
- (void)swapFeature:(unsigned short)a0 withSubstitute:(unsigned short)a1 scores:(float *)a2;
- (void)restoreFromJazzkonPlusHacks:(float *)a0;
- (id)initWithCache:(struct PRSL2FeatureScoreSmallCache { unsigned short x0[32]; float x1[32]; unsigned short x2; })a0 featureData:(void *)a1 featureDataSize:(unsigned short)a2 flags:(unsigned char)a3 values:(unsigned char)a4;
- (id)dictionaryRepresentationWithoutDefaultValues;

@end
