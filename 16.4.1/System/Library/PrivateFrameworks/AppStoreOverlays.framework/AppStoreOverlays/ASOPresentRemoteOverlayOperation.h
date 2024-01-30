@class ASORemoteOverlay;

@interface ASOPresentRemoteOverlayOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (retain, nonatomic) ASORemoteOverlay *remoteOverlay;

- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)finishExecuting;
- (id)initWithRemoteOverlay:(id)a0;

@end
