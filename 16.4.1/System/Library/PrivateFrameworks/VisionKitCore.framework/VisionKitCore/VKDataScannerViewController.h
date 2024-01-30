@class NSMutableDictionary, VKKeyboardCameraGuidanceView, VKTextFrameProcessor, VKBarcodeFrameProcessor, VKRecognizedItem, VKKeyboardCameraReticleView, UIPinchGestureRecognizer, UITapGestureRecognizer, NSMutableArray, UIView, VKAVCaptureFrameProvider, NSString, VKDataScannerViewControllerConfiguration, NSTimer, NSArray, VKHomographyFrameProcessor;
@protocol VKDataScannerViewControllerDelegate;

@interface VKDataScannerViewController : UIViewController <VKAVCaptureFrameProviderDelegate, VKZoomable> {
    VKAVCaptureFrameProvider *_frameProvider;
    VKHomographyFrameProcessor *_homographyFrameProcessor;
    VKTextFrameProcessor *_textFrameProcessor;
    VKBarcodeFrameProcessor *_barcodeFrameProcessor;
    UIView *_overlayContainerView;
    UIView *_hitTestView;
    VKKeyboardCameraGuidanceView *_guidanceView;
    VKKeyboardCameraReticleView *_reticleView;
    NSMutableDictionary *_highlightViewForItemUUID;
    NSTimer *_cantFindItemsTimer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    double _initialPinchZoom;
    BOOL _respondsToItemUpdates;
    BOOL _respondsToDidTapOnItem;
    BOOL _respondsToBeginPinchToZoom;
    BOOL _respondsToEndPinchToZoom;
    NSMutableArray *_recognizedItems;
    VKRecognizedItem *_singleItem;
    NSMutableArray *_capturePhotoCompletions;
}

@property (class, readonly, nonatomic) BOOL supportsDataScanning;
@property (class, readonly, nonatomic) NSArray *supportedTextRecognitionLanguages;

@property (readonly, nonatomic) BOOL isScanning;
@property (readonly, nonatomic) UIView *overlayContainerView;
@property (readonly, nonatomic) VKDataScannerViewControllerConfiguration *configuration;
@property (weak, nonatomic) id<VKDataScannerViewControllerDelegate> delegate;
@property (readonly, nonatomic) double minZoomFactor;
@property (readonly, nonatomic) double maxZoomFactor;
@property (nonatomic) double zoomFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)startScanning;
- (void)stopScanning;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_onTap:(id)a0;
- (void)_onPinch:(id)a0;
- (void)avCaptureFrameProvider:(id)a0 didCapturePhoto:(id)a1 error:(id)a2;
- (void)capturePhotoWithCompletion:(id /* block */)a0;
- (void)frameProvider:(id)a0 didChangeSceneStabilityState:(unsigned long long)a1;

@end
