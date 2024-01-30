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

- (void)startSession;
- (void)_setup;
- (void)cancel;
- (void)viewDidLoad;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)_setChildViewController:(id)a0;
- (void)codeRedeemerController:(id)a0 didEndWithInfo:(id)a1;
- (void)codeRedeemerControllerDidCancel:(id)a0;
- (void)recognitionError;
- (void)_disableBlur;
- (void)_enableBlur;
- (void)_setupCodeRedeemerController;
- (void)_setupFlipVisualEffectView;
- (void)recognitionSuccess;
- (void)toggleCameraWithCompletion:(id /* block */)a0;

@end
