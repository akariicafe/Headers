@class NSDictionary, NSArray;

@interface DESRecordSet : NSObject {
    id /* block */ _dataFetcher;
}

@property (readonly, copy, nonatomic) NSDictionary *nativeRecords;
@property (readonly, copy, nonatomic) NSDictionary *nativeRecordInfo;
@property (readonly, copy, nonatomic) NSArray *coreDuetEvents;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDictionary *predicate;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_initWithNativeRecords:(id)a0 nativeRecordInfo:(id)a1 coreDuetEvents:(id)a2 predicate:(id)a3 dataFetcher:(id /* block */)a4;
- (id)nativeRecordInfoForRecordUUID:(id)a0;
- (id)nativeRecordDataForRecordUUID:(id)a0 error:(id *)a1;
- (id)_anyNativeRecordUUID;
- (id)filteredRecordSetWithJSONPredicate:(id)a0;

@end
