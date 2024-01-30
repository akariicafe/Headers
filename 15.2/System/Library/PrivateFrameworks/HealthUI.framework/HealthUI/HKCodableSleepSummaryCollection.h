@class NSMutableArray;

@interface HKCodableSleepSummaryCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sleepSummaryEntrys;

+ (id)_codableSleepPeriodFromPeriod:(id)a0;
+ (Class)sleepSummaryEntryType;
+ (id)_sleepEntryFromDaySummary:(id)a0;
+ (id)_codableSleepPeriodSegmentFromSegment:(id)a0;
+ (id)sleepSummaryCollectionFromDaySummaries:(id)a0;

- (void)clearSleepSummaryEntrys;
- (unsigned long long)sleepSummaryEntrysCount;
- (id)_daySummaryFromCodableSummary:(id)a0 sourceTimeZone:(id)a1;
- (id)daySummariesWithSourceTimeZone:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)_segmentFromCodableSegment:(id)a0 sourceTimeZone:(id)a1;
- (id)description;
- (void)addSleepSummaryEntry:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)sleepSummaryEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)_sleepPeriodFromCodablePeriod:(id)a0 sourceTimeZone:(id)a1;
- (id)dictionaryRepresentation;

@end
