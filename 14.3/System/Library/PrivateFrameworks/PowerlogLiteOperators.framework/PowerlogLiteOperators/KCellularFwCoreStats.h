@class UtraFddStats, UtraTddStats, EutraStats, GeraStats;

@interface KCellularFwCoreStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasGeraStats;
@property (retain, nonatomic) GeraStats *geraStats;
@property (readonly, nonatomic) BOOL hasUtraFddStats;
@property (retain, nonatomic) UtraFddStats *utraFddStats;
@property (readonly, nonatomic) BOOL hasUtraTddStats;
@property (retain, nonatomic) UtraTddStats *utraTddStats;
@property (readonly, nonatomic) BOOL hasEutraStats;
@property (retain, nonatomic) EutraStats *eutraStats;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

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

@end
