@class CKCamPhysicalCaptureNotifier, CKConversation, NSString, IMBalloonPlugin, UIView, UIViewController;
@protocol CKBrowserViewControllerProtocol, CKFunCameraViewControllerDelegate;

@interface CKFunCameraViewController : UIViewController <CKBrowserViewControllerSendDelegate, CKCamPhysicalCaptureNotifierDelegate>

@property (retain, nonatomic) UIView *funCameraView;
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *funCameraAppViewController;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) IMBalloonPlugin *balloonPlugin;
@property (retain, nonatomic) CKCamPhysicalCaptureNotifier *physicalCaptureNotifier;
@property (retain, nonatomic) CKConversation *conversation;
@property (weak, nonatomic) id<CKFunCameraViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (id)traitCollection;
- (BOOL)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)contentViewControllerForPlugin:(id)a0;
- (void)_checkExtensionAliveOnAppResume:(id)a0;
- (void)_dismissAndPresentPhotosApp:(BOOL)a0;
- (void)_handleRemoteConnectionInterrupted:(id)a0;
- (void)commitPayload:(id)a0;
- (BOOL)commitPayload:(id)a0 forPlugin:(id)a1 allowAllCommits:(BOOL)a2 error:(id *)a3;
- (void)commitSticker:(id)a0;
- (void)commitSticker:(id)a0 withDragTarget:(id)a1;
- (id)configuredContentViewControllerForPlugin:(id)a0;
- (void)dismissAndPresentPhotosApp;
- (void)dismissAndReloadInputViews:(BOOL)a0;
- (void)dismissToKeyboard:(BOOL)a0;
- (id)dragControllerTranscriptDelegate;
- (id)initWithConversation:(id)a0;
- (void)openURL:(id)a0 applicationIdentifier:(id)a1 pluginID:(id)a2 completionHandler:(id /* block */)a3;
- (void)openURL:(id)a0 pluginID:(id)a1 completionHandler:(id /* block */)a2;
- (void)physicalCaptureNotifierDidChangeState:(id)a0;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 completion:(id /* block */)a3;
- (void)requestPresentationStyleExpanded:(BOOL)a0;
- (void)setLocalUserIsTyping:(BOOL)a0;
- (void)stageAssetArchive:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)startEditingPayload:(id)a0;
- (void)startEditingPayload:(id)a0 dismiss:(BOOL)a1;

@end
