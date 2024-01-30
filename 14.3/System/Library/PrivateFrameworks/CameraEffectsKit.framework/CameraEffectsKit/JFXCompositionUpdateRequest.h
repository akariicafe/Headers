@interface JFXCompositionUpdateRequest : JFXCompositionPlayerRequest {
    BOOL _readyForDisplayReceived;
    BOOL _refreshCompletedReceived;
}

@property (readonly, nonatomic) BOOL hasCompleted;

- (void)didBegin;
- (void)didCancel;
- (id)initWithBlock:(id /* block */)a0;
- (void)didEnqueue;
- (void)didComplete;
- (void)setReadyForDisplayReceived;
- (void)setRefreshCompletedReceived;

@end
