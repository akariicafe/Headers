@class NSString, NSMutableArray;

@interface SVVideoPlaybackQueue : NSObject <SVVideoPlaybackObserver>

@property (readonly, nonatomic) NSMutableArray *queue;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendItem:(id)a0;
- (void)prependItem:(id)a0;
- (id)advance;
- (void).cxx_destruct;
- (id)init;
- (void)insertItem:(id)a0 afterItem:(id)a1;
- (void)playbackCoordinator:(id)a0 playbackFailedWithError:(id)a1;
- (void)playbackCoordinator:(id)a0 timeElapsed:(double)a1 duration:(double)a2;
- (void)playbackCoordinator:(id)a0 loadingProgressed:(double)a1;
- (void)prefetchItemAfterCoordinatorIfPossible:(id)a0;

@end
