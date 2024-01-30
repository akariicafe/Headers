@class SIRINLUEXTERNALSemVer, NSMutableArray;

@interface SIRINLUEXTERNALUsoOntologyVocabulary : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUsoVersion;
@property (retain, nonatomic) SIRINLUEXTERNALSemVer *usoVersion;
@property (retain, nonatomic) NSMutableArray *elementNames;

+ (Class)elementNamesType;

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
- (void)addElementNames:(id)a0;
- (unsigned long long)elementNamesCount;
- (void)clearElementNames;
- (id)elementNamesAtIndex:(unsigned long long)a0;

@end
