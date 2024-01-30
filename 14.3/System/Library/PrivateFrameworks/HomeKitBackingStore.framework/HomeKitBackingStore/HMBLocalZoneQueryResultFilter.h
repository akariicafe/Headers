@class NSArray, HMBLocalSQLQueryTableQueryAll;

@interface HMBLocalZoneQueryResultFilter : HMBLocalZoneQueryResultRecordID

@property (readonly, nonatomic) HMBLocalSQLQueryTableQueryAll *query;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) id /* block */ filter;

- (void).cxx_destruct;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { } *)a0 skip:(BOOL *)a1 updatedSequence:(unsigned long long *)a2 error:(id *)a3;
- (id)initWithLocalZone:(id)a0 statement:(id)a1 columns:(id)a2 filter:(id /* block */)a3;

@end
