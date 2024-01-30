@class NSString, NSMutableArray;

@interface ADClientSettingsRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasIAdIDString;
@property (retain, nonatomic) NSString *iAdIDString;
@property (retain, nonatomic) NSMutableArray *currentSettingParams;

+ (id)options;
+ (Class)currentSettingParamsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addCurrentSettingParams:(id)a0;
- (unsigned long long)currentSettingParamsCount;
- (void)clearCurrentSettingParams;
- (id)currentSettingParamsAtIndex:(unsigned long long)a0;

@end
