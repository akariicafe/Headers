@class PBUnknownFields;

@interface GEORPGroundViewImageResource : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _cameraNumber;
    int _loadStatus;
    unsigned int _lod;
    struct { unsigned char has_cameraNumber : 1; unsigned char has_loadStatus : 1; unsigned char has_lod : 1; } _flags;
}

@property (nonatomic) BOOL hasCameraNumber;
@property (nonatomic) unsigned int cameraNumber;
@property (nonatomic) BOOL hasLod;
@property (nonatomic) unsigned int lod;
@property (nonatomic) BOOL hasLoadStatus;
@property (nonatomic) int loadStatus;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)loadStatusAsString:(int)a0;
- (int)StringAsLoadStatus:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
