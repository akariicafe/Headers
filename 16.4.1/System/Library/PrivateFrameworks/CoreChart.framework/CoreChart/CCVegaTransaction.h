@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CCVegaTransaction : NSObject {
    int _status;
    NSHashTable *_scheduledRenderers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)singleton;

- (void)begin;
- (void)commit;
- (id)init;
- (void).cxx_destruct;
- (void)_commitTransactionForRenderers:(id)a0;
- (void)scheduleDisplay:(id)a0;

@end
