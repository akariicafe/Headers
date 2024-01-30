@class NSString, NSMutableArray;

@interface NTPBTopStoriesConfig : PBCodable <NSCopying> {
    struct { unsigned char badgesTimeout : 1; unsigned char cutoffTime : 1; unsigned char maximumArticleCount : 1; unsigned char pinningEnabled : 1; unsigned char promotingEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasPinningEnabled;
@property (nonatomic) BOOL pinningEnabled;
@property (nonatomic) BOOL hasPromotingEnabled;
@property (nonatomic) BOOL promotingEnabled;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) BOOL hasMaximumArticleCount;
@property (nonatomic) long long maximumArticleCount;
@property (nonatomic) BOOL hasCutoffTime;
@property (nonatomic) long long cutoffTime;
@property (retain, nonatomic) NSMutableArray *styleConfigs;
@property (nonatomic) BOOL hasBadgesTimeout;
@property (nonatomic) long long badgesTimeout;

+ (Class)styleConfigsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addStyleConfigs:(id)a0;
- (void)clearStyleConfigs;
- (id)styleConfigsAtIndex:(unsigned long long)a0;
- (unsigned long long)styleConfigsCount;

@end
