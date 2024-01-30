@class NSString;

@interface NPKProtoStandalonePaymentSetupField : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int fieldType;
@property (readonly, nonatomic) BOOL hasCurrentValue;
@property (retain, nonatomic) NSString *currentValue;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)fieldTypeAsString:(int)a0;
- (int)StringAsFieldType:(id)a0;

@end
