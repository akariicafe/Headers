@interface AWDWiFiMetricsManagerAutoJoinCumulative : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _excludedDueToAJBlacklistCounts;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _scanTypesCounts;
    struct { unsigned char timestamp : 1; unsigned char ajScansPerformedWithLocation : 1; unsigned char ajScansPerformedWithoutLocation : 1; unsigned char bandScanCount24 : 1; unsigned char bandScanCount5 : 1; unsigned char ccaBitmap : 1; unsigned char didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount : 1; unsigned char rssiBitmap : 1; unsigned char userChoseToAssociateToAJBlacklistedCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long scanTypesCountsCount;
@property (readonly, nonatomic) unsigned int *scanTypesCounts;
@property (readonly, nonatomic) unsigned long long excludedDueToAJBlacklistCountsCount;
@property (readonly, nonatomic) unsigned int *excludedDueToAJBlacklistCounts;
@property (nonatomic) BOOL hasUserChoseToAssociateToAJBlacklistedCount;
@property (nonatomic) unsigned int userChoseToAssociateToAJBlacklistedCount;
@property (nonatomic) BOOL hasAjScansPerformedWithLocation;
@property (nonatomic) unsigned int ajScansPerformedWithLocation;
@property (nonatomic) BOOL hasAjScansPerformedWithoutLocation;
@property (nonatomic) unsigned int ajScansPerformedWithoutLocation;
@property (nonatomic) BOOL hasDidAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
@property (nonatomic) unsigned int didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
@property (nonatomic) BOOL hasRssiBitmap;
@property (nonatomic) unsigned int rssiBitmap;
@property (nonatomic) BOOL hasCcaBitmap;
@property (nonatomic) unsigned int ccaBitmap;
@property (nonatomic) BOOL hasBandScanCount24;
@property (nonatomic) unsigned int bandScanCount24;
@property (nonatomic) BOOL hasBandScanCount5;
@property (nonatomic) unsigned int bandScanCount5;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)clearScanTypesCounts;
- (unsigned int)scanTypesCountAtIndex:(unsigned long long)a0;
- (void)addScanTypesCount:(unsigned int)a0;
- (void)clearExcludedDueToAJBlacklistCounts;
- (unsigned int)excludedDueToAJBlacklistCountAtIndex:(unsigned long long)a0;
- (void)addExcludedDueToAJBlacklistCount:(unsigned int)a0;
- (void)setScanTypesCounts:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setExcludedDueToAJBlacklistCounts:(unsigned int *)a0 count:(unsigned long long)a1;

@end
