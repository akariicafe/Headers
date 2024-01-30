@class GEONameInfo, PBUnknownFields;

@interface GEORouteName : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEONameInfo *_nameInfo;
    int _lastZilchStitchedIndex;
    struct { unsigned char has_lastZilchStitchedIndex : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasNameInfo;
@property (retain, nonatomic) GEONameInfo *nameInfo;
@property (nonatomic) BOOL hasLastZilchStitchedIndex;
@property (nonatomic) int lastZilchStitchedIndex;
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
