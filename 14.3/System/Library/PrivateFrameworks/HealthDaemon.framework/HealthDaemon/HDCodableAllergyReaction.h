@class HDCodableMedicalDate, NSMutableArray, HDCodableMedicalCoding;

@interface HDCodableAllergyReaction : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *manifestationCodings;
@property (readonly, nonatomic) BOOL hasSeverityCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *severityCoding;
@property (readonly, nonatomic) BOOL hasOnsetDate;
@property (retain, nonatomic) HDCodableMedicalDate *onsetDate;

+ (Class)manifestationCodingsType;

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
- (void)addManifestationCodings:(id)a0;
- (unsigned long long)manifestationCodingsCount;
- (void)clearManifestationCodings;
- (id)manifestationCodingsAtIndex:(unsigned long long)a0;

@end
