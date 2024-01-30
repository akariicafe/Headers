@class NSString, NSData;

@interface NTPBFeedCellExposure : PBCodable <NSCopying> {
    struct { unsigned char displayRankInSection : 1; unsigned char feedCellHostType : 1; unsigned char feedCellSection : 1; unsigned char feedType : 1; unsigned char isUserSubscribedToFeed : 1; } _has;
}

@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (nonatomic) BOOL hasFeedCellSection;
@property (nonatomic) int feedCellSection;
@property (nonatomic) BOOL hasDisplayRankInSection;
@property (nonatomic) int displayRankInSection;
@property (readonly, nonatomic) BOOL hasViewFrameInScreen;
@property (retain, nonatomic) NSString *viewFrameInScreen;
@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) int feedCellHostType;
@property (readonly, nonatomic) BOOL hasFeedCellHostExposureId;
@property (retain, nonatomic) NSData *feedCellHostExposureId;

- (id)feedCellHostTypeAsString:(int)a0;
- (int)StringAsFeedCellHostType:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)feedCellSectionAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsFeedCellSection:(id)a0;
- (id)feedTypeAsString:(int)a0;

@end
