@protocol WPRangingDelegate;

@interface WPRanging : WPClient

@property (weak, nonatomic) id<WPRangingDelegate> delegate;

- (void)isRangingEnabledReply:(id /* block */)a0;
- (void)enableRanging:(BOOL)a0 reply:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)rangingEnabled:(BOOL)a0 withError:(id)a1;
- (void)enableRanging:(BOOL)a0;
- (id)clientAsString;

@end
