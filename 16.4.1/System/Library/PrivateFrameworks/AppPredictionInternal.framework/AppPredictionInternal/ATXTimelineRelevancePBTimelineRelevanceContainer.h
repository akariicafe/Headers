@class NSString, NSMutableArray, ATXTimelineRelevancePBFeatureVector;

@interface ATXTimelineRelevancePBTimelineRelevanceContainer : PBCodable <NSCopying> {
    struct { unsigned char timelineDonationNilCount : 1; unsigned char timestamp : 1; unsigned char atLeastOnePositiveTimelineRelevanceScore : 1; } _has;
}

@property (retain, nonatomic) NSString *widgetBundleId;
@property (retain, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) BOOL hasContainerBundleIdentifier;
@property (retain, nonatomic) NSString *containerBundleIdentifier;
@property (nonatomic) int widgetFamily;
@property (nonatomic) BOOL hasTimelineDonationNilCount;
@property (nonatomic) long long timelineDonationNilCount;
@property (nonatomic) BOOL hasAtLeastOnePositiveTimelineRelevanceScore;
@property (nonatomic) BOOL atLeastOnePositiveTimelineRelevanceScore;
@property (retain, nonatomic) NSMutableArray *timelineRelevanceScores;
@property (retain, nonatomic) NSMutableArray *timelineRelevanceSuggestions;
@property (retain, nonatomic) NSMutableArray *rotations;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSMutableArray *stackConfigSummarys;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasFeatureVector;
@property (retain, nonatomic) ATXTimelineRelevancePBFeatureVector *featureVector;

+ (Class)timelineRelevanceSuggestionType;
+ (Class)rotationType;
+ (Class)stackConfigSummaryType;
+ (Class)timelineRelevanceScoreType;

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
- (void)addTimelineRelevanceSuggestion:(id)a0;
- (int)StringAsWidgetFamily:(id)a0;
- (void)addRotation:(id)a0;
- (void)addStackConfigSummary:(id)a0;
- (void)addTimelineRelevanceScore:(id)a0;
- (void)clearRotations;
- (void)clearStackConfigSummarys;
- (void)clearTimelineRelevanceScores;
- (void)clearTimelineRelevanceSuggestions;
- (id)rotationAtIndex:(unsigned long long)a0;
- (unsigned long long)rotationsCount;
- (id)stackConfigSummaryAtIndex:(unsigned long long)a0;
- (unsigned long long)stackConfigSummarysCount;
- (id)timelineRelevanceScoreAtIndex:(unsigned long long)a0;
- (unsigned long long)timelineRelevanceScoresCount;
- (id)timelineRelevanceSuggestionAtIndex:(unsigned long long)a0;
- (unsigned long long)timelineRelevanceSuggestionsCount;
- (id)widgetFamilyAsString:(int)a0;

@end
