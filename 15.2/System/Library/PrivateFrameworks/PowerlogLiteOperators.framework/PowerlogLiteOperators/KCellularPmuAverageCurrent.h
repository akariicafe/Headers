@class NSMutableArray;

@interface KCellularPmuAverageCurrent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *regulatorCurrents;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;

+ (Class)regulatorCurrentType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addRegulatorCurrent:(id)a0;
- (unsigned long long)regulatorCurrentsCount;
- (void)clearRegulatorCurrents;
- (id)regulatorCurrentAtIndex:(unsigned long long)a0;

@end
