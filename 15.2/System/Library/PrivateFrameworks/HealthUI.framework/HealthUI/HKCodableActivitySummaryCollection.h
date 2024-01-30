@class NSMutableArray;

@interface HKCodableActivitySummaryCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *activitySummaryEntrys;

+ (Class)activitySummaryEntryType;

- (void)addActivitySummaryEntry:(id)a0;
- (id)activitySummaryEntryAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)activitySummaryEntrysCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearActivitySummaryEntrys;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
