@class NSMutableArray;

@interface ICCloudContentTastePBFusePreferences : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *preferences;

+ (Class)preferencesType;

- (void)clearPreferences;
- (id)preferencesAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addPreferences:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)preferencesCount;

@end
