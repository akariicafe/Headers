@class _PASLock, NSObject;
@protocol OS_dispatch_queue, TRIPaths;

@interface TRICKQueryLog : NSObject {
    id<TRIPaths> _paths;
    NSObject<OS_dispatch_queue> *_queue;
    _PASLock *_lock;
}

- (void)_openFileIfNeededWithGuardedData:(id)a0;
- (void)_logQueryWithRecordType:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 guardedData:(id)a3;
- (id)initWithPaths:(id)a0;
- (void)logQueryWithRecordType:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (void).cxx_destruct;

@end
