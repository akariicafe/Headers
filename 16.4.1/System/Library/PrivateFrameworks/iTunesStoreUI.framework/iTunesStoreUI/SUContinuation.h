@protocol SUContinuationDelegate;

@interface SUContinuation : NSObject

@property (nonatomic) id<SUContinuationDelegate> delegate;

- (void)cancel;
- (void)start;
- (void)sendErrorToDelegate:(id)a0;
- (void)sendFinishToDelegate;

@end
