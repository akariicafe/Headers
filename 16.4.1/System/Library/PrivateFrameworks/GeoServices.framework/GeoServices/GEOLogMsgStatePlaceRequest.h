@class GEOPDPlaceRequest;

@interface GEOLogMsgStatePlaceRequest : PBCodable <NSCopying> {
    GEOPDPlaceRequest *_placeDataRequest;
    int _placeRequestType;
    struct { unsigned char has_placeRequestType : 1; } _flags;
}

@property (nonatomic) BOOL hasPlaceRequestType;
@property (nonatomic) int placeRequestType;
@property (readonly, nonatomic) BOOL hasPlaceDataRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeDataRequest;

+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
- (int)StringAsPlaceRequestType:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)placeRequestTypeAsString:(int)a0;

@end
