@class NSString, UIVisualEffectView, CRCodeRedeemerController;
@protocol SUCodeRedeemerControllerDelegate;

@interface SUCodeRedeemerController : UIViewController <CRCodeRedeemerControllerDelegate>

@property (nonatomic) BOOL cameraflipDirection;
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) CRCodeRedeemerController *codeRedeemerController;
@property (weak, nonatomic) id<SUCodeRedeemerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cameraSupported;

- (void)cancel;
- (void)_setup;
- (id)init;
- (void).cxx_destruct;
- (void)startSession;
- (void)_setChildViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)codeRedeemerControllerDidCancel:(id)a0;
- (void)codeRedeemerController:(id)a0 didEndWithInfo:(id)a1;
- (void)recognitionError;
- (void)recognitionSuccess;
- (void)toggleCameraWithCompletion:(id /* block */)a0;
- (void)_enableBlur;
- (void)_disableBlur;
- (void)_setupCodeRedeemerController;
- (void)_setupFlipVisualEffectView;

@end
