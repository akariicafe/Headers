@class NSDictionary, NSArray;

@interface DESRecordSet : NSObject <NSSecureCoding> {
    id /* block */ _dataFetcher;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *nativeRecords;
@property (readonly, copy, nonatomic) NSDictionary *nativeRecordInfo;
@property (readonly, copy, nonatomic) NSArray *coreDuetEvents;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDictionary *predicate;

+ (void)initialize;
+ (id)recordSetWithRecipeType:(id)a0 nativeRecords:(id)a1 coreDuetEventsUUIDs:(id)a2 error:(id *)a3;

- (id)nativeRecordDataForRecordUUID:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)nativeRecordInfoForRecordUUID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNativeRecords:(id)a0 nativeRecordInfo:(id)a1 coreDuetEvents:(id)a2;
- (id)initWithNativeRecords:(id)a0 nativeRecordInfo:(id)a1 coreDuetEvents:(id)a2 predicate:(id)a3 dataFetcher:(id /* block */)a4;
- (id)filteredRecordSetWithJSONPredicate:(id)a0;
- (id)_anyNativeRecordUUID;

@end
