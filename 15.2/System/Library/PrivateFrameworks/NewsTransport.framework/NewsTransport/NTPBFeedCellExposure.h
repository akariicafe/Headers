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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)feedTypeAsString:(int)a0;
- (int)StringAsFeedType:(id)a0;
- (id)feedCellSectionAsString:(int)a0;
- (int)StringAsFeedCellSection:(id)a0;
- (id)feedCellHostTypeAsString:(int)a0;
- (int)StringAsFeedCellHostType:(id)a0;

@end
