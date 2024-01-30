@class NTPBConfig, NSMutableArray;

@interface NTPBMultiABConfig : PBCodable <NSCopying> {
    struct { unsigned char moduloForHashing : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDefaultConfig;
@property (retain, nonatomic) NTPBConfig *defaultConfig;
@property (nonatomic) BOOL hasModuloForHashing;
@property (nonatomic) long long moduloForHashing;
@property (retain, nonatomic) NSMutableArray *abConfigs;

+ (Class)abConfigsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAbConfigs:(id)a0;
- (void)clearAbConfigs;
- (unsigned long long)abConfigsCount;
- (id)abConfigsAtIndex:(unsigned long long)a0;

@end
