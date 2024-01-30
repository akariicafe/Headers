@interface NAWeakZoomable : NSObject <NAZoomable> {
    void /* unknown type, empty encoding */ zoomable;
}

- (void)zoomOut;
- (void)zoomIn;
- (void)resetZoom;
- (BOOL)canIncreaseTextSize;
- (BOOL)canDecreaseTextSize;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)increaseTextSize;
- (void)decreaseTextSize;
- (BOOL)canResetZoom;
- (void).cxx_destruct;
- (id)init;
- (id)initWithZoomable:(id)a0;

@end
