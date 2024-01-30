@class _PASQueueLock;

@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock *_lock;
}

- (id)fetchInlineSetComplicationDescriptors;
- (id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)a0 error:(id *)a1;
- (BOOL)writeComplicationsInlineSetCache:(id)a0;
- (id)fetchModularSetComplicationDescriptors;
- (BOOL)_writeComplicationsCache:(id)a0 path:(id)a1 withError:(id *)a2;
- (id)init;
- (BOOL)writeComplicationsModularSetCache:(id)a0;
- (void).cxx_destruct;

@end
