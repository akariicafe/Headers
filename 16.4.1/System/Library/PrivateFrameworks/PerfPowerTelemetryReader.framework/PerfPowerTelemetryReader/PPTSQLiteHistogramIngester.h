@class NSString, NSArray, NSURL, NSPredicate;

@interface PPTSQLiteHistogramIngester : NSObject <PPTDataIngesterProtocol> {
    NSArray *_dimensions;
}

@property (readonly, copy, nonatomic) NSURL *filepath;
@property (readonly, copy, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSArray *metricNames;
@property (readonly, nonatomic) NSPredicate *predicate;

- (id)parseData:(id *)a0;
- (void).cxx_destruct;
- (id)_convertSQLiteDataFromQuery:(id)a0 withProperties:(id)a1 error:(id *)a2;
- (id)initWithFilepath:(id)a0 tableName:(id)a1 metricNames:(id)a2 predicate:(id)a3 dimensions:(id)a4;

@end
