@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SOPublisherCache : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) SOPublisherCache *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)setPublisher:(id)a0 forSnapshotType:(Class)a1;
- (id)publisherForSnapshotType:(Class)a0;
- (void)removePublisherForSnapshotType:(Class)a0;

@end
