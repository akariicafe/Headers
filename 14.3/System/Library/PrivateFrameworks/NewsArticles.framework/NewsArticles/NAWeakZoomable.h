@interface NAWeakZoomable : NSObject <NAZoomable> {
    void /* unknown type, empty encoding */ zoomable;
}

- (void)zoomOut;
- (void)resetZoom;
- (void)zoomIn;
- (BOOL)canIncreaseTextSize;
- (BOOL)canDecreaseTextSize;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)increaseTextSize;
- (void)decreaseTextSize;
- (BOOL)canResetZoom;
- (id)init;
- (void).cxx_destruct;
- (id)initWithZoomable:(id)a0;

@end
