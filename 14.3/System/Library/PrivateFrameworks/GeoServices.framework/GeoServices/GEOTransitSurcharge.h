@class NSMutableArray, PBUnknownFields;

@interface GEOTransitSurcharge : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_surchargeUnits;
    unsigned int _numberOfLegs;
    int _paymentType;
    struct { unsigned char has_numberOfLegs : 1; unsigned char has_paymentType : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *surchargeUnits;
@property (nonatomic) BOOL hasPaymentType;
@property (nonatomic) int paymentType;
@property (nonatomic) BOOL hasNumberOfLegs;
@property (nonatomic) unsigned int numberOfLegs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)surchargeUnitType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)paymentTypeAsString:(int)a0;
- (void).cxx_destruct;
- (int)StringAsPaymentType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addSurchargeUnit:(id)a0;
- (unsigned long long)surchargeUnitsCount;
- (void)clearSurchargeUnits;
- (id)surchargeUnitAtIndex:(unsigned long long)a0;
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
