@class PHAJobConstraints;
@protocol PHAJobConstraintsObserverDelegate;

@interface PHAJobConstraintsObserver : NSObject

@property (retain, nonatomic) PHAJobConstraints *currentConstraints;
@property (weak, nonatomic) id<PHAJobConstraintsObserverDelegate> delegate;
@property BOOL shutdownRequested;

- (id)acceptConstraints:(id)a0 mask:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)setShutdownRequested;
- (id)init;
- (id)initWithInitialConstraints:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;

@end
