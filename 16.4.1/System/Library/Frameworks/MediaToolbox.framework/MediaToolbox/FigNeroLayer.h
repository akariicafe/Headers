@class NSObject;
@protocol OS_dispatch_queue, FigNeroLayerDelegate;

@interface FigNeroLayer : CALayer {
    NSObject<OS_dispatch_queue> *_neroQueue;
    struct OpaqueFigNeroid { } *_neroid;
    id<FigNeroLayerDelegate> _neroDelegate;
}

@property (nonatomic) id<FigNeroLayerDelegate> neroDelegate;

- (void)_start;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stop;
- (id)init;
- (void)start;
- (void)_dispatchNotification:(id)a0 value:(id)a1;

@end
