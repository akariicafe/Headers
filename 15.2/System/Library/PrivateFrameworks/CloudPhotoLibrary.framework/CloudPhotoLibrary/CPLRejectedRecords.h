@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {
    NSMutableDictionary *_records;
    NSMutableDictionary *_reasons;
}

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)count;
- (id)objectForKeyedSubscript:(id)a0;
- (id)recordWithScopedIdentifier:(id)a0;
- (void)removeRejectedRecordsWithScopedIdentifiers:(id)a0;
- (void)enumerateRecordsAndReasonsUsingBlock:(id /* block */)a0;
- (BOOL)rejectsTheSameRecordsAs:(id)a0;
- (id)rejectedDescriptions;

@end
