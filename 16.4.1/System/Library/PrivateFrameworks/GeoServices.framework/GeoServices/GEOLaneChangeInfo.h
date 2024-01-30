@class PBUnknownFields;

@interface GEOLaneChangeInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _endOffsetCm;
    unsigned int _numValidLanes;
    unsigned int _startOffsetCm;
    struct { unsigned char has_endOffsetCm : 1; unsigned char has_numValidLanes : 1; unsigned char has_startOffsetCm : 1; } _flags;
}

@property (nonatomic) BOOL hasStartOffsetCm;
@property (nonatomic) unsigned int startOffsetCm;
@property (nonatomic) BOOL hasEndOffsetCm;
@property (nonatomic) unsigned int endOffsetCm;
@property (nonatomic) BOOL hasNumValidLanes;
@property (nonatomic) unsigned int numValidLanes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
