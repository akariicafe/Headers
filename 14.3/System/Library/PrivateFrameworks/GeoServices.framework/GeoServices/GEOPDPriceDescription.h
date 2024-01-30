@class NSString, PBUnknownFields;

@interface GEOPDPriceDescription : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_priceDescription;
}

@property (readonly, nonatomic) BOOL hasPriceDescription;
@property (retain, nonatomic) NSString *priceDescription;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)priceDescriptionForPlaceData:(id)a0;
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
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
