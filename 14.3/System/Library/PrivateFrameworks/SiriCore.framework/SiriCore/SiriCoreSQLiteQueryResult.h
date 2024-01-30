@class SiriCoreSQLiteStatement, NSArray, NSDictionary, SiriCoreSQLiteQuery, NSError;

@interface SiriCoreSQLiteQueryResult : NSObject

@property (readonly, copy, nonatomic) SiriCoreSQLiteQuery *query;
@property (readonly, nonatomic) unsigned long long beginMachTime;
@property (readonly, nonatomic) unsigned long long endMachTime;
@property (readonly, nonatomic) SiriCoreSQLiteStatement *statement;
@property (readonly, copy, nonatomic) NSArray *columnNameTuple;
@property (readonly, copy, nonatomic) NSArray *columnValueTuples;
@property (readonly, copy, nonatomic) NSDictionary *columnValuesMap;
@property (readonly, copy, nonatomic) NSArray *rowValueTuples;
@property (readonly, copy, nonatomic) NSArray *rowValueMaps;
@property (readonly, copy, nonatomic) NSArray *records;
@property (readonly, copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)description;
- (id)initWithQuery:(id)a0 beginMachTime:(unsigned long long)a1 endMachTime:(unsigned long long)a2 statement:(id)a3 columnNameTuple:(id)a4 columnValueTuples:(id)a5 columnValuesMap:(id)a6 rowValueTuples:(id)a7 rowValueMaps:(id)a8 records:(id)a9 error:(id)a10;

@end
