@class NSString, PBUnknownFields;

@interface GEOPDPriceDescription : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_priceDescription;
}

+ (id)priceDescriptionForPlaceData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
