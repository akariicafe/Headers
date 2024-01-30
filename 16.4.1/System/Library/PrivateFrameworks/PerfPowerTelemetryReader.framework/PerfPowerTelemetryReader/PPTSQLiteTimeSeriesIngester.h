@class NSString, NSArray, NSURL, NSPredicate, PPTTimestampConverter;

@interface PPTSQLiteTimeSeriesIngester : NSObject <PPTDataIngesterProtocol> {
    unsigned long long _limitCount;
    unsigned long long _offsetCount;
    unsigned long long _readDirection;
    BOOL _convertTimestamp;
    PPTTimestampConverter *_timestampConverter;
}

@property (readonly, copy, nonatomic) NSURL *filepath;
@property (readonly, copy, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSArray *metricNames;
@property (readonly, nonatomic) NSPredicate *predicate;

- (id)parseData:(id *)a0;
- (void).cxx_destruct;
- (id)_convertSQLiteDataFromQuery:(id)a0 withProperties:(id)a1 error:(id *)a2;
- (id)initWithFilepath:(id)a0 tableName:(id)a1 metricNames:(id)a2 predicate:(id)a3 limitCount:(unsigned long long)a4 offsetCount:(unsigned long long)a5 readDirection:(unsigned long long)a6 convertTimestamp:(BOOL)a7;

@end
