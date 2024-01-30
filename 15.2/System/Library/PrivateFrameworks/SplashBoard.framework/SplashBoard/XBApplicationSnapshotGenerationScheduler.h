@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface XBApplicationSnapshotGenerationScheduler : NSObject <XBApplicationSnapshotImageGenerationScheduling> {
    NSObject<OS_dispatch_workloop> *_imageGenerationWorkloop;
    NSObject<OS_dispatch_queue> *_imageGenerationQueue;
    NSObject<OS_dispatch_workloop> *_dataGenerationWorkloop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)performImageDataGenerationAsync:(id /* block */)a0 withHandler:(id /* block */)a1;
- (void)performImageGenerationAsync:(id /* block */)a0;
- (void)performImageGenerationAsyncAndWait:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)performImageDataGenerationAsyncAndWait:(id /* block */)a0 withHandler:(id /* block */)a1;

@end
