@class NSMutableArray;

@interface PBBProtoTransferPerformanceResults : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *milestones;
@property (retain, nonatomic) NSMutableArray *measures;
@property (retain, nonatomic) NSMutableArray *macroActivites;

+ (Class)milestonesType;
+ (Class)measuresType;
+ (Class)macroActivitesType;

- (void)addMilestones:(id)a0;
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
- (void)addMeasures:(id)a0;
- (void)addMacroActivites:(id)a0;
- (unsigned long long)milestonesCount;
- (void)clearMilestones;
- (id)milestonesAtIndex:(unsigned long long)a0;
- (unsigned long long)measuresCount;
- (void)clearMeasures;
- (id)measuresAtIndex:(unsigned long long)a0;
- (unsigned long long)macroActivitesCount;
- (void)clearMacroActivites;
- (id)macroActivitesAtIndex:(unsigned long long)a0;

@end
