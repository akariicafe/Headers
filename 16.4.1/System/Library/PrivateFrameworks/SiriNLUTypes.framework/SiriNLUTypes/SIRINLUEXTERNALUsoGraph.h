@class SIRINLUEXTERNALSemVer, NSMutableArray;

@interface SIRINLUEXTERNALUsoGraph : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) SIRINLUEXTERNALSemVer *version;
@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSMutableArray *edges;
@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableArray *alignments;

+ (Class)identifiersType;
+ (Class)alignmentsType;
+ (Class)edgesType;
+ (Class)nodesType;

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
- (void)clearIdentifiers;
- (unsigned long long)identifiersCount;
- (void)addIdentifiers:(id)a0;
- (unsigned long long)alignmentsCount;
- (void)clearAlignments;
- (void)addAlignments:(id)a0;
- (void)addEdges:(id)a0;
- (void)addNodes:(id)a0;
- (id)alignmentsAtIndex:(unsigned long long)a0;
- (void)clearEdges;
- (void)clearNodes;
- (id)edgesAtIndex:(unsigned long long)a0;
- (unsigned long long)edgesCount;
- (id)identifiersAtIndex:(unsigned long long)a0;
- (id)nodesAtIndex:(unsigned long long)a0;
- (unsigned long long)nodesCount;

@end
