@protocol ASORemoteContextProvider;

@interface ASODismissRemoteOverlayOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (weak, nonatomic) id<ASORemoteContextProvider> contextProvider;

- (void)cancel;
- (void).cxx_destruct;
- (void)start;
- (void)finishExecuting;
- (id)initWithContextProvider:(id)a0;

@end
