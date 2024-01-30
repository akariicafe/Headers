@class NSString, FCCPercentageOfDayRuleProtobuf;

@interface FCCAtypicalDayConfigurationProtobuf : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _allowedGoalTypes;
    struct { unsigned char minimumAheadPercentage : 1; unsigned char minimumBehindPercentage : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasMinimumAheadPercentage;
@property (nonatomic) double minimumAheadPercentage;
@property (nonatomic) BOOL hasMinimumBehindPercentage;
@property (nonatomic) double minimumBehindPercentage;
@property (readonly, nonatomic) BOOL hasPercentageOfDayRule;
@property (retain, nonatomic) FCCPercentageOfDayRuleProtobuf *percentageOfDayRule;
@property (readonly, nonatomic) unsigned long long allowedGoalTypesCount;
@property (readonly, nonatomic) int *allowedGoalTypes;

- (int)allowedGoalTypesAtIndex:(unsigned long long)a0;
- (void)addAllowedGoalTypes:(int)a0;
- (void)clearAllowedGoalTypes;
- (void)setAllowedGoalTypes:(int *)a0 count:(unsigned long long)a1;
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

@end
