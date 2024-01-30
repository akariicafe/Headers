@protocol ASORemoteContextProvider;

@interface ASODismissRemoteOverlayOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (weak, nonatomic) id<ASORemoteContextProvider> contextProvider;

- (void)cancel;
- (id)initWithContextProvider:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)finishExecuting;

@end
