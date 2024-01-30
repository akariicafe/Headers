@interface CoreIDVUI.IDScanCameraReader : CRCameraReader <CRCameraReaderDelegate> {
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ fallBackTimeInSeconds;
    void /* unknown type, empty encoding */ eligibilityHelper;
    void /* unknown type, empty encoding */ didCaptureImage;
    void /* unknown type, empty encoding */ shouldReturnImage;
    void /* unknown type, empty encoding */ onError;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (BOOL)cameraReader:(id)a0 shouldReturnIDImage:(id)a1;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (void)timerAction;

@end
