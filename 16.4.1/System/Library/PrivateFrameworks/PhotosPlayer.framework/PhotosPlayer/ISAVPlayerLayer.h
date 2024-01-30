@class NSObject;
@protocol OS_dispatch_queue;

@interface ISAVPlayerLayer : AVPlayerLayer {
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (copy, nonatomic) id /* block */ readyForDisplayChangeHandler;

- (void)didChangeValueForKey:(id)a0;
- (void)setPlayer:(id)a0;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)deferredDealloc;
- (void)setWrappedPlayer:(id)a0;

@end
