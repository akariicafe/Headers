@class NSObject, HKGraphView, NSLock, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface HKGraphViewTileThread : NSThread

@property (readonly, nonatomic) NSLock *queueLock;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *queueSemaphore;
@property (retain, nonatomic) NSMutableArray *rendererQueue;
@property (weak, nonatomic) HKGraphView *graphView;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)_laterRenderingExists:(id)a0;
- (id)initWithGraphView:(id)a0;
- (void)scheduleRedrawUsingRenderer:(id)a0;

@end
