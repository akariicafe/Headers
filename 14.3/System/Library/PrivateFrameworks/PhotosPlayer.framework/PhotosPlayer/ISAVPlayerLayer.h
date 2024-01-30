@class NSObject;
@protocol OS_dispatch_queue;

@interface ISAVPlayerLayer : AVPlayerLayer {
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (copy, nonatomic) id /* block */ readyForDisplayChangeHandler;

- (void)setPlayer:(id)a0;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)deferredDealloc;
- (void)dealloc;
- (void)setWrappedPlayer:(id)a0;
- (void)didChangeValueForKey:(id)a0;

@end
