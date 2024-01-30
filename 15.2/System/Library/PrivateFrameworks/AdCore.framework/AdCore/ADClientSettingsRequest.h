@class NSString, NSMutableArray;

@interface ADClientSettingsRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasIAdIDString;
@property (retain, nonatomic) NSString *iAdIDString;
@property (retain, nonatomic) NSMutableArray *currentSettingParams;
@property (retain, nonatomic) NSMutableArray *currentSearchLandingAdsSettingParams;

+ (id)options;
+ (Class)currentSearchLandingAdsSettingParamsType;
+ (Class)currentSettingParamsType;

- (void)addCurrentSettingParams:(id)a0;
- (void)clearCurrentSettingParams;
- (id)currentSettingParamsAtIndex:(unsigned long long)a0;
- (unsigned long long)currentSearchLandingAdsSettingParamsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addCurrentSearchLandingAdsSettingParams:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)currentSettingParamsCount;
- (id)currentSearchLandingAdsSettingParamsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearCurrentSearchLandingAdsSettingParams;
- (id)dictionaryRepresentation;

@end
