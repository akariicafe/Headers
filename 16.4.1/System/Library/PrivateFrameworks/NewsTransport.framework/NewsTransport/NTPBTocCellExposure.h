@class NSData, NTPBTocCellExposureArticleElement, NTPBFeedCellExposure;

@interface NTPBTocCellExposure : PBCodable <NSCopying> {
    struct { unsigned char displayRank : 1; unsigned char rankInSection : 1; unsigned char tocCellSection : 1; unsigned char type : 1; unsigned char isBadged : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasTocCellExposureId;
@property (retain, nonatomic) NSData *tocCellExposureId;
@property (nonatomic) BOOL hasIsBadged;
@property (nonatomic) BOOL isBadged;
@property (nonatomic) BOOL hasDisplayRank;
@property (nonatomic) int displayRank;
@property (nonatomic) BOOL hasRankInSection;
@property (nonatomic) int rankInSection;
@property (nonatomic) BOOL hasTocCellSection;
@property (nonatomic) int tocCellSection;
@property (readonly, nonatomic) BOOL hasFeedCellExposure;
@property (retain, nonatomic) NTPBFeedCellExposure *feedCellExposure;
@property (readonly, nonatomic) BOOL hasTocCellExposureArticleElement;
@property (retain, nonatomic) NTPBTocCellExposureArticleElement *tocCellExposureArticleElement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsTocCellSection:(id)a0;
- (id)tocCellSectionAsString:(int)a0;

@end
