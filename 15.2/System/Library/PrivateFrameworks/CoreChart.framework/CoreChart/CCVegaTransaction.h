@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CCVegaTransaction : NSObject {
    int _status;
    NSHashTable *_scheduledRenderers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)singleton;

- (void)commit;
- (void)begin;
- (void).cxx_destruct;
- (id)init;
- (void)_commitTransactionForRenderers:(id)a0;
- (void)scheduleDisplay:(id)a0;

@end
