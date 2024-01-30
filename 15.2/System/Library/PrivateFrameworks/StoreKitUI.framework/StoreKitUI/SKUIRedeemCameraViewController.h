@class NSString, SKUIRedeem, CRCodeRedeemerController, UIBarButtonItem;
@protocol SKUIRedeemCameraViewControllerDelegate, SKUIRedeemViewCameraOverrideDelegate;

@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController <CRCodeRedeemerControllerDelegate, SKUIRedeemCameraViewDelegate, SKUIRedeemCameraViewControllerDelegate> {
    BOOL _alreadyPushed;
    CRCodeRedeemerController *_camera;
    UIBarButtonItem *_redeemButton;
    UIBarButtonItem *_flipButton;
    UIBarButtonItem *_activityBarButtonItem;
    SKUIRedeem *_successfulRedeem;
    BOOL _fullscreen;
}

@property (readonly, nonatomic) long long category;
@property (copy, nonatomic) NSString *initialCode;
@property (weak, nonatomic) id<SKUIRedeemCameraViewControllerDelegate> delegate;
@property (weak, nonatomic) id<SKUIRedeemViewCameraOverrideDelegate> cameraOverrideDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_enabled;
- (id)contentScrollView;
- (void)loadView;
- (void).cxx_destruct;
- (void)_cancelAction:(id)a0;
- (void)dealloc;
- (void)_setEnabled:(BOOL)a0;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)_redeemAction:(id)a0;
- (void)codeRedeemerControllerDidCancel:(id)a0;
- (void)codeRedeemerController:(id)a0 didEndWithInfo:(id)a1;
- (void)codeRedeemerControllerDidDisplayMessage:(id)a0;
- (void)performRedeemOperationWithCode:(id)a0 cameraRecognized:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithRedeemCategory:(long long)a0;
- (void)redeemCameraViewController:(id)a0 didFinishWithRedeem:(id)a1;
- (id)initWithRedeemCategoryFullscreen:(long long)a0;
- (void)_performRedeemOperationWithCode:(id)a0 cameraRecognized:(BOOL)a1 allowOverride:(BOOL)a2 completion:(id /* block */)a3;
- (void)_flipAction:(id)a0;
- (void)_updateRightBarButtonItemsForRedeemInputState:(long long)a0;
- (void)SKUIRedeemPreflightImagesDidLoad:(id)a0;
- (void)_redeemDidFinish:(id)a0 error:(id)a1;
- (void)_cameraRedeemDidFinish:(id)a0 error:(id)a1;
- (id)redeemerViewForSKUIRedeemCameraView:(id)a0;
- (void)SKUIRedeemCameraView:(id)a0 textFieldDidChange:(id)a1;
- (void)SKUIRedeemCameraView:(id)a0 textFieldDidRedeem:(id)a1;
- (void)cancelRedeemerViewForSKUIRedeemCameraView:(id)a0;
- (void)startRedeemerViewForSKUIRedeemCameraView:(id)a0;
- (void)presentFullScreenCameraViewForSKUIRedeemCameraView:(id)a0;
- (void)showITunesPassLearnMoreForSKUIRedeemCameraView:(id)a0;

@end
