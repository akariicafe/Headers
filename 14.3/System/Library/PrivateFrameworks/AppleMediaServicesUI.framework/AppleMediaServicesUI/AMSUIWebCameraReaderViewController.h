@class NSString, CRCameraReader, AMSUIWebClientContext, AMSUIWebCameraReaderInfoView, AMSUIWebCameraReaderPageModel, AMSUIWebAppearance, NSDictionary;

@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController <CRCameraReaderDelegate, AMSUIWebPagePresenter>

@property (retain, nonatomic) AMSUIWebAppearance *appearance;
@property (retain, nonatomic) CRCameraReader *cameraController;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) AMSUIWebCameraReaderInfoView *infoView;
@property (retain, nonatomic) AMSUIWebCameraReaderPageModel *model;
@property (retain, nonatomic) NSDictionary *output;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cameraSupported;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_applyAppearance;
- (void)_setupPageForCreditCard;
- (void)_layoutPageForCreditCard;
- (void)_handleCameraOutput:(id)a0 error:(id)a1;
- (id)_outputForCreditCardReaderObjects:(id)a0;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
