@class NSData, NSString, NSMutableArray;

@interface HKCodableSummaryTrendValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAnalysisData;
@property (retain, nonatomic) NSData *analysisData;
@property (readonly, nonatomic) BOOL hasCoveredDateRangeRawValue;
@property (retain, nonatomic) NSString *coveredDateRangeRawValue;
@property (retain, nonatomic) NSMutableArray *dataPresencePoints;

+ (Class)dataPresencePointsType;

- (void)addDataPresencePoints:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dataPresencePointsCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)clearDataPresencePoints;
- (id)dictionaryRepresentation;
- (id)dataPresencePointsAtIndex:(unsigned long long)a0;

@end
