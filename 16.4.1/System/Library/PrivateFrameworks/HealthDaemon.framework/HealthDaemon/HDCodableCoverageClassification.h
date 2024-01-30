@class HDCodableMedicalCodingList, NSString;

@interface HDCodableCoverageClassification : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTypeCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *typeCodings;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
