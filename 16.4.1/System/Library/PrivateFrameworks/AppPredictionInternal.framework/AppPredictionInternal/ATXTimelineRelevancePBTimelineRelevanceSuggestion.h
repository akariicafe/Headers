@class NSString, NSMutableArray;

@interface ATXTimelineRelevancePBTimelineRelevanceSuggestion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSuggestionID;
@property (retain, nonatomic) NSString *suggestionID;
@property (retain, nonatomic) NSMutableArray *abuseControlOutcomes;
@property (retain, nonatomic) NSMutableArray *timelineRelevanceScoreEntrys;

+ (Class)timelineRelevanceScoreEntryType;
+ (Class)abuseControlOutcomeType;

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
- (void)addTimelineRelevanceScoreEntry:(id)a0;
- (id)abuseControlOutcomeAtIndex:(unsigned long long)a0;
- (unsigned long long)abuseControlOutcomesCount;
- (void)addAbuseControlOutcome:(id)a0;
- (void)clearAbuseControlOutcomes;
- (void)clearTimelineRelevanceScoreEntrys;
- (id)timelineRelevanceScoreEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)timelineRelevanceScoreEntrysCount;

@end
