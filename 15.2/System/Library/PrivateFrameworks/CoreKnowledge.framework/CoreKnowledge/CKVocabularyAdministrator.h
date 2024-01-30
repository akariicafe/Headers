@class NSObject;
@protocol OS_dispatch_queue, CKVAdminService;

@interface CKVocabularyAdministrator : NSObject {
    NSObject<CKVAdminService> *_adminService;
    double _timeout;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
+ (id)makeAdministrator;

- (void).cxx_destruct;
- (id)init;
- (void)triggerMigration:(id /* block */)a0;
- (void)captureVocabularySnapshot:(id)a0 completion:(id /* block */)a1;
- (id)initWithAdminService:(id)a0 queue:(id)a1;
- (id)initWithAdminService:(id)a0 timeout:(double)a1 queue:(id)a2;
- (BOOL)decodeVocabularySnapshot:(id)a0 toText:(id)a1 error:(id *)a2;
- (id)simulateEventHandling:(BOOL)a0;
- (void)enumerateAllItemsWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
