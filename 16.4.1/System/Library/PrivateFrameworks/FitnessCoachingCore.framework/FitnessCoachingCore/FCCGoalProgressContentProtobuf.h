@class NSString;

@interface FCCGoalProgressContentProtobuf : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _goalTypesToDisplays;
    struct { unsigned char expectedGoalValue : 1; unsigned char goalTypeToHighlight : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEventIdentifier;
@property (retain, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) unsigned long long goalTypesToDisplaysCount;
@property (readonly, nonatomic) int *goalTypesToDisplays;
@property (nonatomic) BOOL hasGoalTypeToHighlight;
@property (nonatomic) int goalTypeToHighlight;
@property (nonatomic) BOOL hasExpectedGoalValue;
@property (nonatomic) double expectedGoalValue;

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
- (void)addGoalTypesToDisplay:(int)a0;
- (void)clearGoalTypesToDisplays;
- (int)goalTypesToDisplayAtIndex:(unsigned long long)a0;
- (void)setGoalTypesToDisplays:(int *)a0 count:(unsigned long long)a1;

@end
