@class NSString, CRCameraReader, SUCreditCardReaderInfoView, SUCreditCardReaderOutput;

@interface SUCreditCardReaderViewController : UIViewController <CRCameraReaderDelegate> {
    CRCameraReader *cameraController;
    SUCreditCardReaderInfoView *captureInfoView;
    SUCreditCardReaderOutput *pendingOutput;
}

@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cameraSupported;

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_cancelButtonPressed;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (void)_returnCameraOutput:(id)a0 error:(id)a1;

@end
