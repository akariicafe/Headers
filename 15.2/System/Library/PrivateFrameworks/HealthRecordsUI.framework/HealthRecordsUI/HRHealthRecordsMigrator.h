@interface HRHealthRecordsMigrator : NSObject {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ searchIndexController;
    void /* unknown type, empty encoding */ keyValueDomain;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ healthRecordsKeyValueDomain;
    void /* unknown type, empty encoding */ dataVersionKey;
}

- (id)initWithHealthStore:(id)a0;
- (void)migrateIfNeededWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
