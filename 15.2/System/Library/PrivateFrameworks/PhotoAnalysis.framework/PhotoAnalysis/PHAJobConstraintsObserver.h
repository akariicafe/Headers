@class PHAJobConstraints;
@protocol PHAJobConstraintsObserverDelegate;

@interface PHAJobConstraintsObserver : NSObject

@property (retain, nonatomic) PHAJobConstraints *currentConstraints;
@property (weak, nonatomic) id<PHAJobConstraintsObserverDelegate> delegate;
@property BOOL shutdownRequested;

- (id)acceptConstraints:(id)a0 mask:(id)a1 completion:(id /* block */)a2;
- (void)setShutdownRequested;
- (void).cxx_destruct;
- (id)init;
- (id)initWithInitialConstraints:(id)a0 delegate:(id)a1;
- (void)dealloc;

@end
