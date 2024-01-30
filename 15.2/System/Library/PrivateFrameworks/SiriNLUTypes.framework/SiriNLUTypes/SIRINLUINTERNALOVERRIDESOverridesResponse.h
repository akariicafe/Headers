@class NSMutableArray;

@interface SIRINLUINTERNALOVERRIDESOverridesResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *parses;

+ (Class)parsesType;

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
- (void)addParses:(id)a0;
- (void)clearParses;
- (unsigned long long)parsesCount;
- (id)parsesAtIndex:(unsigned long long)a0;

@end
