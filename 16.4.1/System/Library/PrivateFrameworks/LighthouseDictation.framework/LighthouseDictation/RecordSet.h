@class NSDictionary;

@interface RecordSet : NSObject {
    id /* block */ _dataFetcher;
}

@property (readonly, copy, nonatomic) NSDictionary *nativeRecords;
@property (readonly, copy, nonatomic) NSDictionary *nativeRecordInfo;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)nativeRecordDataForRecordUUID:(id)a0 error:(id *)a1;
- (id)_anyNativeRecordUUID;
- (id)nativeRecordInfoForRecordUUID:(id)a0;
- (id)initWithNativeRecords:(id)a0 nativeRecordInfo:(id)a1;
- (id)initWithNativeRecords:(id)a0 nativeRecordInfo:(id)a1 dataFetcher:(id /* block */)a2;

@end
