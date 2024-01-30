@interface VisionKit.DataScannerViewController : UIViewController {
    void /* unknown type, empty encoding */ shouldResumeProcessingOnEnterForeground;
    void /* unknown type, empty encoding */ internalDataType;
    void /* unknown type, empty encoding */ cantFindItemsTimer;
    void /* unknown type, empty encoding */ pinchGestureRecognizer;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ respondsToDidBeginPinchToZoom;
    void /* unknown type, empty encoding */ respondsToDidEndPinchToZoom;
    void /* unknown type, empty encoding */ textProcessor;
    void /* unknown type, empty encoding */ barcodeProcessor;
    void /* unknown type, empty encoding */ homographyProcessor;
    void /* unknown type, empty encoding */ frameProvider;
    void /* unknown type, empty encoding */ hitTestView;
    void /* unknown type, empty encoding */ impl;
    void /* unknown type, empty encoding */ bridge;
    void /* unknown type, empty encoding */ textItems;
    void /* unknown type, empty encoding */ barcodeItems;
    void /* unknown type, empty encoding */ currentRecognizedItems;
    void /* unknown type, empty encoding */ reticleView;
    void /* unknown type, empty encoding */ highlightViewForItemUUID;
    void /* unknown type, empty encoding */ guidanceView;
    void /* unknown type, empty encoding */ capturePhotoCompletions;
    void /* unknown type, empty encoding */ recognizedItemsContinuations;
    void /* unknown type, empty encoding */ initialPinchZoom;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ overlayContainerView;
    void /* unknown type, empty encoding */ recognizedDataTypes;
    void /* unknown type, empty encoding */ qualityLevel;
    void /* unknown type, empty encoding */ recognizesMultipleItems;
    void /* unknown type, empty encoding */ isHighFrameRateTrackingEnabled;
    void /* unknown type, empty encoding */ isPinchToZoomEnabled;
    void /* unknown type, empty encoding */ isGuidanceEnabled;
    void /* unknown type, empty encoding */ isHighlightingEnabled;
    void /* unknown type, empty encoding */ regionOfInterest;
    void /* unknown type, empty encoding */ privateDelegate;
    void /* unknown type, empty encoding */ processingInterval;
    void /* unknown type, empty encoding */ infrequentProcessingInterval;
    void /* unknown type, empty encoding */ customWords;
    void /* unknown type, empty encoding */ usesLanguageDetection;
}

- (void)willEnterForeground;
- (void)didEnterBackground;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)onPinch:(id)a0;
- (void)onTap:(id)a0;

@end
