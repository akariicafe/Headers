@class SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUEXTERNALSystemInformed : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *taskId;
@property (retain, nonatomic) NSMutableArray *entities;

+ (Class)entitiesType;

- (void)clearEntities;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)entitiesCount;
- (void)addEntities:(id)a0;
- (id)entitiesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
