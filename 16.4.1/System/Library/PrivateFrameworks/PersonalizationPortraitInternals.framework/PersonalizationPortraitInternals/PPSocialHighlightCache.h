@class _PASLock, PPSQLDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface PPSocialHighlightCache : NSObject {
    _PASLock *_lock;
    PPSQLDatabase *_db;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;

@end
