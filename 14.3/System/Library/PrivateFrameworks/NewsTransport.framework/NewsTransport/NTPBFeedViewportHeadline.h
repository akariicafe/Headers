@class NSString, NTPBDate;

@interface NTPBFeedViewportHeadline : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _surfacedByTagIDsRefs;
    struct { unsigned char tileProminenceScore : 1; unsigned char storyType : 1; unsigned char surfacedByArticleListIDRef : 1; unsigned char surfacedByBinIDRef : 1; unsigned char surfacedByChannelIDRef : 1; unsigned char surfacedBySectionIDRef : 1; unsigned char surfacedByTopicIDRef : 1; unsigned char topStoryType : 1; unsigned char usesImageOnTopLayout : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (nonatomic) BOOL hasSurfacedBySectionIDRef;
@property (nonatomic) int surfacedBySectionIDRef;
@property (nonatomic) BOOL hasSurfacedByChannelIDRef;
@property (nonatomic) int surfacedByChannelIDRef;
@property (nonatomic) BOOL hasSurfacedByTopicIDRef;
@property (nonatomic) int surfacedByTopicIDRef;
@property (nonatomic) BOOL hasSurfacedByBinIDRef;
@property (nonatomic) int surfacedByBinIDRef;
@property (nonatomic) BOOL hasTopStoryType;
@property (nonatomic) int topStoryType;
@property (nonatomic) BOOL hasTileProminenceScore;
@property (nonatomic) double tileProminenceScore;
@property (nonatomic) BOOL hasUsesImageOnTopLayout;
@property (nonatomic) BOOL usesImageOnTopLayout;
@property (readonly, nonatomic) unsigned long long surfacedByTagIDsRefsCount;
@property (readonly, nonatomic) int *surfacedByTagIDsRefs;
@property (nonatomic) BOOL hasSurfacedByArticleListIDRef;
@property (nonatomic) int surfacedByArticleListIDRef;
@property (readonly, nonatomic) BOOL hasClusterID;
@property (retain, nonatomic) NSString *clusterID;
@property (nonatomic) BOOL hasStoryType;
@property (nonatomic) int storyType;
@property (readonly, nonatomic) BOOL hasDisplayDate;
@property (retain, nonatomic) NTPBDate *displayDate;
@property (readonly, nonatomic) BOOL hasCallToActionText;
@property (retain, nonatomic) NSString *callToActionText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (void)setSurfacedByTagIDsRefs:(int *)a0 count:(unsigned long long)a1;
- (void)clearSurfacedByTagIDsRefs;
- (int)surfacedByTagIDsRefsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)addSurfacedByTagIDsRefs:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
