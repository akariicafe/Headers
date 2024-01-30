@class NSString, NSMutableArray;

@interface NTPBSearchExecute : PBCodable <NSCopying> {
    struct { unsigned char searchExecutionMethod : 1; unsigned char searchLocation : 1; unsigned char totalResults : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) BOOL hasSearchLocation;
@property (nonatomic) int searchLocation;
@property (nonatomic) BOOL hasSearchExecutionMethod;
@property (nonatomic) int searchExecutionMethod;
@property (nonatomic) BOOL hasTotalResults;
@property (nonatomic) int totalResults;
@property (readonly, nonatomic) BOOL hasTopResultFeedId;
@property (retain, nonatomic) NSString *topResultFeedId;
@property (retain, nonatomic) NSMutableArray *topicResultFeedIds;
@property (retain, nonatomic) NSMutableArray *channelResultFeedIds;
@property (readonly, nonatomic) BOOL hasStoreFrontId;
@property (retain, nonatomic) NSString *storeFrontId;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (readonly, nonatomic) BOOL hasTopResultArticleId;
@property (retain, nonatomic) NSString *topResultArticleId;
@property (readonly, nonatomic) BOOL hasTopResultChannelId;
@property (retain, nonatomic) NSString *topResultChannelId;
@property (readonly, nonatomic) BOOL hasTopResultTopicId;
@property (retain, nonatomic) NSString *topResultTopicId;
@property (retain, nonatomic) NSMutableArray *articleResultIds;
@property (readonly, nonatomic) BOOL hasCompletedSearchString;
@property (retain, nonatomic) NSString *completedSearchString;

+ (Class)topicResultFeedIdsType;
+ (Class)channelResultFeedIdsType;
+ (Class)articleResultIdsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addTopicResultFeedIds:(id)a0;
- (void)addChannelResultFeedIds:(id)a0;
- (void)addArticleResultIds:(id)a0;
- (id)searchLocationAsString:(int)a0;
- (int)StringAsSearchLocation:(id)a0;
- (id)searchExecutionMethodAsString:(int)a0;
- (int)StringAsSearchExecutionMethod:(id)a0;
- (void)clearTopicResultFeedIds;
- (unsigned long long)topicResultFeedIdsCount;
- (id)topicResultFeedIdsAtIndex:(unsigned long long)a0;
- (void)clearChannelResultFeedIds;
- (unsigned long long)channelResultFeedIdsCount;
- (id)channelResultFeedIdsAtIndex:(unsigned long long)a0;
- (void)clearArticleResultIds;
- (unsigned long long)articleResultIdsCount;
- (id)articleResultIdsAtIndex:(unsigned long long)a0;

@end
