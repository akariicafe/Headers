@class GEOPDSRawAttribute, PBUnknownFields;

@interface GEOPDSInferredValue : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDSRawAttribute *_attribute;
    int _priceRange;
    int _tradingHours;
    BOOL _negateInferredValue;
    struct { unsigned char has_priceRange : 1; unsigned char has_tradingHours : 1; unsigned char has_negateInferredValue : 1; } _flags;
}

@property (nonatomic) BOOL hasPriceRange;
@property (nonatomic) int priceRange;
@property (nonatomic) BOOL hasTradingHours;
@property (nonatomic) int tradingHours;
@property (readonly, nonatomic) BOOL hasAttribute;
@property (retain, nonatomic) GEOPDSRawAttribute *attribute;
@property (nonatomic) BOOL hasNegateInferredValue;
@property (nonatomic) BOOL negateInferredValue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)priceRangeAsString:(int)a0;
- (int)StringAsPriceRange:(id)a0;
- (id)tradingHoursAsString:(int)a0;
- (int)StringAsTradingHours:(id)a0;
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
