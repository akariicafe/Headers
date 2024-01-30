@protocol SiriDirectActionSourceDelegate;

@interface SiriDirectActionSource : SiriActivationSource

@property (weak, nonatomic) id<SiriDirectActionSourceDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)configureConnection;
- (id)initWithDelegate:(id)a0;
- (void)activateWithContext:(id)a0;
- (oneway void)canActivateChangedTo:(id)a0;

@end
