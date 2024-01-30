@class NSData;

@interface ETPDoodle : PBCodable <NSCopying> {
    struct { unsigned char doodleCount : 1; } _has;
}

@property (nonatomic) BOOL hasDoodleCount;
@property (nonatomic) unsigned int doodleCount;
@property (readonly, nonatomic) BOOL hasDoodleData;
@property (retain, nonatomic) NSData *doodleData;
@property (readonly, nonatomic) BOOL hasColorData;
@property (retain, nonatomic) NSData *colorData;
@property (readonly, nonatomic) BOOL hasPointTimeDeltaData;
@property (retain, nonatomic) NSData *pointTimeDeltaData;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
