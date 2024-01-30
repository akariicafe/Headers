@interface NAWeakZoomable : NSObject <NAZoomable> {
    void /* unknown type, empty encoding */ zoomable;
}

- (void)zoomOut;
- (void)zoomIn;
- (void)resetZoom;
- (BOOL)canDecreaseTextSize;
- (BOOL)canIncreaseTextSize;
- (BOOL)canResetZoom;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)decreaseTextSize;
- (void)increaseTextSize;
- (id)init;
- (void).cxx_destruct;
- (id)initWithZoomable:(id)a0;

@end
