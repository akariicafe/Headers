@class NSString;

@interface FCCGoalCompletionProtobuf : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _completedGoalTypes;
    struct { unsigned char activitySummaryIndex : 1; } _has;
}

@property (nonatomic) BOOL hasActivitySummaryIndex;
@property (nonatomic) long long activitySummaryIndex;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long completedGoalTypesCount;
@property (readonly, nonatomic) int *completedGoalTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addCompletedGoalTypes:(int)a0;
- (void)clearCompletedGoalTypes;
- (int)completedGoalTypesAtIndex:(unsigned long long)a0;
- (void)setCompletedGoalTypes:(int *)a0 count:(unsigned long long)a1;

@end
