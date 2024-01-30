@class ODCurareReportFillerDataSetSize, NSMutableArray, NSString;

@interface ODCurareReportFillerDataSet : PBCodable <NSCopying>

@property (retain, nonatomic) ODCurareReportFillerDataSetSize *size;
@property (retain, nonatomic) NSMutableArray *stats;
@property (readonly, nonatomic) BOOL hasSampleStartDate;
@property (retain, nonatomic) NSString *sampleStartDate;
@property (readonly, nonatomic) BOOL hasSampleEndDate;
@property (retain, nonatomic) NSString *sampleEndDate;

+ (Class)statsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addStats:(id)a0;
- (unsigned long long)statsCount;
- (void)clearStats;
- (id)statsAtIndex:(unsigned long long)a0;

@end
