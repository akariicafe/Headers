@class NSArray;

@interface RoomPlan.RoomCaptureView : UIView {
    void /* unknown type, empty encoding */ captureSession;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isModelEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_settingsManager;
    void /* unknown type, empty encoding */ roomCaptureARView;
    void /* unknown type, empty encoding */ worldSpaceManager;
    void /* unknown type, empty encoding */ coachingOverlayView;
    void /* unknown type, empty encoding */ roomCaptureSessionObserver;
    void /* unknown type, empty encoding */ deltaTimeArray;
    void /* unknown type, empty encoding */ isEndingCaptureSession;
    void /* unknown type, empty encoding */ logPerimeterDirectoryPath;
    void /* unknown type, empty encoding */ completeTransitionTime;
    void /* unknown type, empty encoding */ sceneObserver;
    void /* unknown type, empty encoding */ sceneShaderRenderer;
    void /* unknown type, empty encoding */ viewOrientation;
    void /* unknown type, empty encoding */ viewportSize;
    void /* unknown type, empty encoding */ currentCameraTransform;
    void /* unknown type, empty encoding */ roomBuilder;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ isEncoding;
    void /* unknown type, empty encoding */ strutPoints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_frameProcessor;
}

@property (nonatomic, retain) id ibDelegate;
@property (nonatomic, readonly) NSArray *subviews;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
