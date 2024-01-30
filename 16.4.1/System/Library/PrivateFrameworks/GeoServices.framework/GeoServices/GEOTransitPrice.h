@class NSString, PBUnknownFields;

@interface GEOTransitPrice : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_currencyCode;
    int _amountInCents;
    unsigned int _subunit;
    struct { unsigned char has_amountInCents : 1; unsigned char has_subunit : 1; } _flags;
}

@property (nonatomic) BOOL hasAmountInCents;
@property (nonatomic) int amountInCents;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) BOOL hasSubunit;
@property (nonatomic) unsigned int subunit;
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
