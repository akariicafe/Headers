@class NSObject;
@protocol OS_dispatch_group;

@interface PXStoryPausableLoadingCoordinator : NSObject <PXStoryLoadingCoordinator> {
    NSObject<OS_dispatch_group> *_timelineWorkGroup;
}

- (void).cxx_destruct;
- (id)init;
- (void)dispatchTimelineWorkAsyncOnQueue:(id)a0 block:(id /* block */)a1;
- (void)pauseTimelineWork;
- (void)resumeTimelineWork;

@end
