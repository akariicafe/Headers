@class NSString;

@interface NPKProtoStandalonePaymentSetupField : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int fieldType;
@property (readonly, nonatomic) BOOL hasCurrentValue;
@property (retain, nonatomic) NSString *currentValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)fieldTypeAsString:(int)a0;
- (int)StringAsFieldType:(id)a0;

@end
