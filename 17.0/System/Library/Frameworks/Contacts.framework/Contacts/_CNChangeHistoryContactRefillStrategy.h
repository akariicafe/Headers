@class NSArray, CNContactStore;

@interface _CNChangeHistoryContactRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {
    BOOL _unifyResults;
    NSArray *_keys;
    CNContactStore *_contactStore;
}

- (id)batchesToRepresentObjects:(id)a0 suggestedBatchSize:(unsigned long long)a1;
- (id)objectsRepresentedByBatch:(id)a0;
- (void).cxx_destruct;

@end
