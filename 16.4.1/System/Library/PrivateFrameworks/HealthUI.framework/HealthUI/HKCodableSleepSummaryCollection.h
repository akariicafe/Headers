@class NSMutableArray;

@interface HKCodableSleepSummaryCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sleepSummaryEntrys;

+ (id)_codableSleepPeriodFromPeriod:(id)a0;
+ (id)_codableSleepPeriodSegmentFromSegment:(id)a0;
+ (id)_sleepEntryFromDaySummary:(id)a0;
+ (id)sleepSummaryCollectionFromDaySummaries:(id)a0;
+ (Class)sleepSummaryEntryType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)daySummariesWithSourceTimeZone:(id)a0;
- (id)_daySummaryFromCodableSummary:(id)a0 sourceTimeZone:(id)a1;
- (id)_segmentFromCodableSegment:(id)a0 sourceTimeZone:(id)a1;
- (id)_sleepPeriodFromCodablePeriod:(id)a0 sourceTimeZone:(id)a1;
- (void)addSleepSummaryEntry:(id)a0;
- (void)clearSleepSummaryEntrys;
- (id)sleepSummaryEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)sleepSummaryEntrysCount;

@end
