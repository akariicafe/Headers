@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryDummyAppleMusicSongsProducer : NSObject <PXStorySongsProducer> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_queue_assets;
}

@property (nonatomic) unsigned long long logContext;

- (void).cxx_destruct;
- (id)init;
- (id)requestSongsWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;
- (void)_queue_requestSongsWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
