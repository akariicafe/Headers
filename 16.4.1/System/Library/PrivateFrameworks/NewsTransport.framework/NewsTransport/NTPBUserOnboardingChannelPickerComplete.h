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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)topicIdAtIndex:(unsigned long long)a0;
- (int)StringAsChannelPickerPresentationReason:(id)a0;
- (unsigned long long)channelIdsCount;
- (void)clearChannelIds;
- (void)addChannelId:(id)a0;
- (void)addTopicId:(id)a0;
- (id)channelIdAtIndex:(unsigned long long)a0;
- (id)channelPickerPresentationReasonAsString:(int)a0;
- (void)clearTopicIds;
- (unsigned long long)topicIdsCount;

@end
