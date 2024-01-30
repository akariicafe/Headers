@class NSString;

@interface NTPBHeadlineAnalyticsElement : PBCodable <NSCopying> {
    struct { unsigned char articleVersion : 1; unsigned char needsSeenStateTracking : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (nonatomic) BOOL hasArticleVersion;
@property (nonatomic) long long articleVersion;
@property (nonatomic) BOOL hasNeedsSeenStateTracking;
@property (nonatomic) BOOL needsSeenStateTracking;
@property (readonly, nonatomic) BOOL hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL hasPreseenCountTrackingIdentifier;
@property (retain, nonatomic) NSString *preseenCountTrackingIdentifier;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
