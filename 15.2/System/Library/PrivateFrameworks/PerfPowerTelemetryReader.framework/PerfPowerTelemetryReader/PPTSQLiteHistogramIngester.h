@class NSString, NSArray, NSPredicate;

@interface PPTSQLiteHistogramIngester : NSObject <PPTDataIngesterProtocol> {
    unsigned long long _binCount;
    struct { double min; double max; } _range;
}

@property (readonly, copy, nonatomic) NSString *filepath;
@property (readonly, copy, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSArray *metricNames;
@property (readonly, nonatomic) NSPredicate *predicate;

- (id)parseData:(id *)a0;
- (void).cxx_destruct;
- (id)_convertSQLiteDataFromQuery:(id)a0 withProperties:(id)a1 error:(id *)a2;
- (id)initWithFilepath:(id)a0 tableName:(id)a1 metricNames:(id)a2 predicate:(id)a3 binCount:(unsigned long long)a4 minRange:(double)a5 maxRange:(double)a6;

@end
