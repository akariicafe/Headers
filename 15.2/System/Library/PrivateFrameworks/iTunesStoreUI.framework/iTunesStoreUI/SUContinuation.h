@protocol SUContinuationDelegate;

@interface SUContinuation : NSObject

@property (nonatomic) id<SUContinuationDelegate> delegate;

- (void)start;
- (void)cancel;
- (void)sendErrorToDelegate:(id)a0;
- (void)sendFinishToDelegate;

@end
