@class NSData, NSString, NSMutableArray;

@interface HKCodableSummaryTrendValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAnalysisData;
@property (retain, nonatomic) NSData *analysisData;
@property (readonly, nonatomic) BOOL hasCoveredDateRangeRawValue;
@property (retain, nonatomic) NSString *coveredDateRangeRawValue;
@property (retain, nonatomic) NSMutableArray *dataPresencePoints;

+ (Class)dataPresencePointsType;

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
- (void)addDataPresencePoints:(id)a0;
- (void)clearDataPresencePoints;
- (id)dataPresencePointsAtIndex:(unsigned long long)a0;
- (unsigned long long)dataPresencePointsCount;

@end
