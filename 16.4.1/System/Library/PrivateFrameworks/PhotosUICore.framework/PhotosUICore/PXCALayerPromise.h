@class CALayer, NSString;

@interface PXCALayerPromise : PXObservable <PXMutableCALayerPromise, CALayerDelegate> {
    BOOL _startedLayerRealization;
}

@property (retain, nonatomic, setter=_setLayer:) CALayer *layer;
@property (readonly, nonatomic) BOOL shouldCancel;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double contentsScale;
@property (readonly, nonatomic) BOOL rendersAsynchronously;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setContentsScale:(double)a0;
- (void)setRendersAsynchronously:(BOOL)a0;
- (id)createCustomLayer;
- (void)performChanges:(id /* block */)a0;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawLayerContentInContext:(struct CGContext { } *)a0;
- (id)mutableChangeObject;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateLayer;
- (void)_handlePreparedLayer:(id)a0;
- (void)_realizeLayer;
- (void)cancelLayerRealization;
- (void)startLayerRealization;

@end
