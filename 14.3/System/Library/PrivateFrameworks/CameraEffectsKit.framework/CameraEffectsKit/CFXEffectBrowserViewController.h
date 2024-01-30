@class UIView, NSString, IMADockViewController, NSObject, NSLayoutConstraint, CFXEffectPickerViewController, UIViewController, JFXOrientationMonitor;
@protocol OS_dispatch_group, CFXEffectBrowserViewControllerDelegate, OS_dispatch_semaphore, OS_dispatch_queue, CFXEffectBrowserContentPresenterDelegate;

@interface CFXEffectBrowserViewController : UIViewController <AVTAvatarPickerDelegate, CFXEffectPickerViewControllerDelegate, IMADockViewControllerDelegate>

@property (weak, nonatomic) id<CFXEffectBrowserViewControllerDelegate> delegate;
@property (retain, nonatomic) CFXEffectPickerViewController *effectPickerViewController;
@property (retain, nonatomic) UIView *messagesAppsDockContainerView;
@property (retain, nonatomic) IMADockViewController *messagesAppsDockViewController;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *animatedPreviewWritingSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *animatedPreviewWritingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *animatedPreviewProcessingGroup;
@property (weak, nonatomic) UIViewController *contentPresenter;
@property (retain, nonatomic) NSLayoutConstraint *madWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madExpandedAppButtonsHeightConstraint;
@property (retain, nonatomic) NSString *selectedAppIdentifier;
@property (retain, nonatomic) JFXOrientationMonitor *orientationMonitor;
@property (weak, nonatomic) id<CFXEffectBrowserContentPresenterDelegate> contentPresenterDelegate;
@property (nonatomic) BOOL showAppIconBorders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *dockPresentationViewController;
@property (readonly, nonatomic) BOOL expandedAppShouldDismissOnDragSuccess;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expandedAppViewControllerSize;

+ (struct CGSize { double x0; double x1; })CFX_sizeOfImageAtURL:(id)a0;
+ (struct CGSize { double x0; double x1; })CFX_droppedSizeForSticker:(id)a0 dropTarget:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)avatarPicker:(id)a0 didSelectAvatarRecord:(id)a1;
- (void)addSticker:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)avatarPickerDidEndCameraSession:(id)a0;
- (void)avatarPickerWillStartCameraSession:(id)a0;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)a0 contentPresenter:(id)a1;
- (void)hideBrowserAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)a0;
- (id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)a0;
- (BOOL)shouldRotateCellsForDeviceOrientation;
- (void)configureUIForOrientation;
- (void)refreshEffectBrowserForCameraFlip;
- (void)effectPickerViewController:(id)a0 didPickEffect:(id)a1;
- (id)selectedFilterIdentifierForEffectPickerViewController:(id)a0;
- (id)orientationStateForEffectPickerViewController:(id)a0;
- (void)initMessagesAppsDockViewController;
- (void)removeEffectPickerViewController;
- (void)CFX_updateAVTAvatarPickerforMessagesAppViewController:(id)a0;
- (void)compactCurrentMessagesApp;
- (void)CFX_addSticker:(id)a0 atDropTarget:(id)a1;
- (void)displayPickerForEffectTypeIdentifier:(id)a0 messagesAppViewController:(id)a1 embedInMessageAppViewController:(BOOL)a2;
- (void)addSticker:(id)a0 atDropTarget:(id)a1;
- (void)didSelectAppWithBundleIdentifier:(id)a0;
- (void)presentExpandedAppViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissExpandedAppViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dockDidMagnify:(BOOL)a0;
- (void)commitAnimatedLayoutChanges;

@end
