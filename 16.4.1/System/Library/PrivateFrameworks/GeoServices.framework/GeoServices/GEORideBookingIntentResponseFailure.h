@interface GEORideBookingIntentResponseFailure : PBCodable <NSCopying> {
    int _failure;
    int _intent;
    struct { unsigned char has_failure : 1; unsigned char has_intent : 1; } _flags;
}

@property (nonatomic) BOOL hasIntent;
@property (nonatomic) int intent;
@property (nonatomic) BOOL hasFailure;
@property (nonatomic) int failure;

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
- (int)StringAsIntent:(id)a0;
- (int)StringAsFailure:(id)a0;
- (id)intentAsString:(int)a0;
- (id)failureAsString:(int)a0;

@end
