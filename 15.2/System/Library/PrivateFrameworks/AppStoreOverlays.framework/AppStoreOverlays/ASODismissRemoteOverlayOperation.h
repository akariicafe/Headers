@protocol ASORemoteContextProvider;

@interface ASODismissRemoteOverlayOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (weak, nonatomic) id<ASORemoteContextProvider> contextProvider;

- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishExecuting;
- (id)initWithContextProvider:(id)a0;

@end
