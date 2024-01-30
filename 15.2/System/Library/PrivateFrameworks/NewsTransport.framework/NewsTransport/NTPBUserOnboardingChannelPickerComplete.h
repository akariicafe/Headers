@class NSMutableArray;

@interface NTPBUserOnboardingChannelPickerComplete : PBCodable <NSCopying> {
    struct { unsigned char channelPickerPresentationReason : 1; unsigned char totalChannelSelections : 1; unsigned char totalTopicSelections : 1; unsigned char fromPersonalizeNews : 1; } _has;
}

@property (nonatomic) BOOL hasTotalChannelSelections;
@property (nonatomic) int totalChannelSelections;
@property (nonatomic) BOOL hasTotalTopicSelections;
@property (nonatomic) int totalTopicSelections;
@property (retain, nonatomic) NSMutableArray *channelIds;
@property (retain, nonatomic) NSMutableArray *topicIds;
@property (nonatomic) BOOL hasFromPersonalizeNews;
@property (nonatomic) BOOL fromPersonalizeNews;
@property (nonatomic) BOOL hasChannelPickerPresentationReason;
@property (nonatomic) int channelPickerPresentationReason;

+ (Class)channelIdType;
+ (Class)topicIdType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearTopicIds;
- (unsigned long long)topicIdsCount;
- (void)addChannelId:(id)a0;
- (void)addTopicId:(id)a0;
- (void)clearChannelIds;
- (unsigned long long)channelIdsCount;
- (id)channelIdAtIndex:(unsigned long long)a0;
- (id)topicIdAtIndex:(unsigned long long)a0;
- (id)channelPickerPresentationReasonAsString:(int)a0;
- (int)StringAsChannelPickerPresentationReason:(id)a0;

@end
