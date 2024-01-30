@class ODCurareReportFillerDataSetSize, NSMutableArray, NSString;

@interface ODCurareReportFillerDataSet : PBCodable <NSCopying>

@property (retain, nonatomic) ODCurareReportFillerDataSetSize *size;
@property (retain, nonatomic) NSMutableArray *stats;
@property (readonly, nonatomic) BOOL hasSampleStartDate;
@property (retain, nonatomic) NSString *sampleStartDate;
@property (readonly, nonatomic) BOOL hasSampleEndDate;
@property (retain, nonatomic) NSString *sampleEndDate;

+ (Class)statsType;

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
- (void)addStats:(id)a0;
- (void)clearStats;
- (id)statsAtIndex:(unsigned long long)a0;
- (unsigned long long)statsCount;

@end
