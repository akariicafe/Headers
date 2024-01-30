@class HDCodableMedicalCodingList, NSString;

@interface HDCodableCoverageClassification : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTypeCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *typeCodings;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;

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

@end
