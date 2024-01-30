@interface JFXCompositionUpdateRequest : JFXCompositionPlayerRequest {
    BOOL _readyForDisplayReceived;
    BOOL _refreshCompletedReceived;
}

@property (readonly, nonatomic) BOOL hasCompleted;

- (void)didComplete;
- (id)initWithBlock:(id /* block */)a0;
- (void)didCancel;
- (void)didBegin;
- (void)didEnqueue;
- (void)setReadyForDisplayReceived;
- (void)setRefreshCompletedReceived;

@end
