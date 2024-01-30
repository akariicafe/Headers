@class NSString, CRCameraReader, WBSCreditCardData;
@protocol _SFCreditCardCaptureViewControllerDelegate;

@interface _SFCreditCardCaptureViewController : UINavigationController <CRCameraReaderDelegate> {
    CRCameraReader *_reader;
    WBSCreditCardData *_receivedCardData;
}

@property (weak, nonatomic) id<_SFCreditCardCaptureViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCapture;

- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (void)_cancel:(id)a0;

@end
