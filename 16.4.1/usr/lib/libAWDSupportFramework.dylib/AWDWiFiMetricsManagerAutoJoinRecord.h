@class NSMutableArray;

@interface AWDWiFiMetricsManagerAutoJoinRecord : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _scannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
    struct { unsigned char beganTimestamp : 1; unsigned char endedTimestamp : 1; unsigned char enteredKnownNetworkGeotagLocationTimeStamp : 1; unsigned char timestamp : 1; unsigned char wakeTimestamp : 1; unsigned char bandExclusionReason : 1; unsigned char bandScanCount24 : 1; unsigned char bandScanCount5 : 1; unsigned char ccaBitmap : 1; unsigned char knownNetworksFoundInScans : 1; unsigned char lastScanError : 1; unsigned char lastScanType : 1; unsigned char nwExclusionCount : 1; unsigned char resetReason : 1; unsigned char resetTypes : 1; unsigned char retryIndex : 1; unsigned char rssiBitmap : 1; unsigned char scanResultFound : 1; unsigned char scanTypes : 1; unsigned char state : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasBeganTimestamp;
@property (nonatomic) unsigned long long beganTimestamp;
@property (nonatomic) BOOL hasEndedTimestamp;
@property (nonatomic) unsigned long long endedTimestamp;
@property (nonatomic) BOOL hasWakeTimestamp;
@property (nonatomic) unsigned long long wakeTimestamp;
@property (nonatomic) BOOL hasEnteredKnownNetworkGeotagLocationTimeStamp;
@property (nonatomic) unsigned long long enteredKnownNetworkGeotagLocationTimeStamp;
@property (nonatomic) BOOL hasState;
@property (nonatomic) unsigned int state;
@property (nonatomic) BOOL hasRetryIndex;
@property (nonatomic) unsigned int retryIndex;
@property (readonly, nonatomic) unsigned long long scannedNetworksExcludedFromAJDueToBlacklistReasonCountsCount;
@property (readonly, nonatomic) unsigned int *scannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
@property (nonatomic) BOOL hasScanTypes;
@property (nonatomic) unsigned int scanTypes;
@property (nonatomic) BOOL hasLastScanType;
@property (nonatomic) unsigned int lastScanType;
@property (nonatomic) BOOL hasResetTypes;
@property (nonatomic) unsigned int resetTypes;
@property (nonatomic) BOOL hasResetReason;
@property (nonatomic) unsigned int resetReason;
@property (nonatomic) BOOL hasScanResultFound;
@property (nonatomic) unsigned int scanResultFound;
@property (nonatomic) BOOL hasKnownNetworksFoundInScans;
@property (nonatomic) unsigned int knownNetworksFoundInScans;
@property (nonatomic) BOOL hasLastScanError;
@property (nonatomic) unsigned int lastScanError;
@property (nonatomic) BOOL hasRssiBitmap;
@property (nonatomic) unsigned int rssiBitmap;
@property (nonatomic) BOOL hasCcaBitmap;
@property (nonatomic) unsigned int ccaBitmap;
@property (nonatomic) BOOL hasBandScanCount24;
@property (nonatomic) unsigned int bandScanCount24;
@property (nonatomic) BOOL hasBandScanCount5;
@property (nonatomic) unsigned int bandScanCount5;
@property (nonatomic) BOOL hasNwExclusionCount;
@property (nonatomic) unsigned int nwExclusionCount;
@property (retain, nonatomic) NSMutableArray *networksExcludedFromAJDueToThresholds;
@property (nonatomic) BOOL hasBandExclusionReason;
@property (nonatomic) unsigned int bandExclusionReason;

+ (Class)networksExcludedFromAJDueToThresholdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned int)scannedNetworksExcludedFromAJDueToBlacklistReasonCountsAtIndex:(unsigned long long)a0;
- (void)addNetworksExcludedFromAJDueToThresholds:(id)a0;
- (void)addScannedNetworksExcludedFromAJDueToBlacklistReasonCounts:(unsigned int)a0;
- (void)clearNetworksExcludedFromAJDueToThresholds;
- (void)clearScannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
- (id)networksExcludedFromAJDueToThresholdsAtIndex:(unsigned long long)a0;
- (unsigned long long)networksExcludedFromAJDueToThresholdsCount;
- (void)setScannedNetworksExcludedFromAJDueToBlacklistReasonCounts:(unsigned int *)a0 count:(unsigned long long)a1;

@end
