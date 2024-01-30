@class SIRINLUEXTERNALSemVer, NSMutableArray;

@interface SIRINLUEXTERNALUsoGraph : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) SIRINLUEXTERNALSemVer *version;
@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSMutableArray *edges;
@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableArray *alignments;

+ (Class)identifiersType;
+ (Class)nodesType;
+ (Class)edgesType;
+ (Class)alignmentsType;

- (unsigned long long)identifiersCount;
- (void)clearIdentifiers;
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
- (void)addIdentifiers:(id)a0;
- (id)identifiersAtIndex:(unsigned long long)a0;
- (void)addNodes:(id)a0;
- (void)addEdges:(id)a0;
- (void)addAlignments:(id)a0;
- (void)clearNodes;
- (unsigned long long)nodesCount;
- (id)nodesAtIndex:(unsigned long long)a0;
- (void)clearEdges;
- (unsigned long long)edgesCount;
- (id)edgesAtIndex:(unsigned long long)a0;
- (void)clearAlignments;
- (unsigned long long)alignmentsCount;
- (id)alignmentsAtIndex:(unsigned long long)a0;

@end
