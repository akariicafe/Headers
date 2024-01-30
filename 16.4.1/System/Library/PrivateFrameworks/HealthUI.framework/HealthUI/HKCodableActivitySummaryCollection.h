@class NSMutableArray;

@interface HKCodableActivitySummaryCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *activitySummaryEntrys;

+ (Class)activitySummaryEntryType;

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
- (unsigned long long)activitySummaryEntrysCount;
- (id)activitySummaryEntryAtIndex:(unsigned long long)a0;
- (void)addActivitySummaryEntry:(id)a0;
- (void)clearActivitySummaryEntrys;

@end
