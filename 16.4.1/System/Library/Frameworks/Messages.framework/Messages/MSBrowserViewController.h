@class UIView, NSString, NSArray, CKBrowserDragManager, NSData, IMBalloonPlugin, UIViewController, IMBalloonPluginDataSource, NSNumber;
@protocol CKBrowserViewControllerSendDelegate, UIViewControllerTransitioningDelegate;

@interface MSBrowserViewController : UIViewController <CKBrowserViewControllerProtocol> {
    long long _previousConsumer;
}

@property (nonatomic) BOOL isTransitioningToExpandedPresentation;
@property (weak, nonatomic) UIView *dragTargetView;
@property (retain, nonatomic) CKBrowserDragManager *browserDragManager;
@property (retain, nonatomic) UIViewController *presentationViewController;
@property (weak, nonatomic) id<CKBrowserViewControllerSendDelegate> sendDelegate;
@property (readonly, nonatomic) IMBalloonPlugin *balloonPlugin;
@property (retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (nonatomic) BOOL isiMessage;
@property (nonatomic) NSString *conversationID;
@property (readonly, nonatomic) BOOL wantsDarkUI;
@property (readonly, nonatomic) BOOL wantsOpaqueUI;
@property (readonly, nonatomic) BOOL supportsQuickView;
@property (readonly, nonatomic) BOOL shouldSuppressEntryView;
@property (nonatomic) BOOL isPrimaryViewController;
@property (readonly, nonatomic, getter=isDismissing) BOOL dismissing;
@property (readonly, nonatomic) BOOL mayBeKeptInViewHierarchy;
@property (readonly, nonatomic) long long browserPresentationStyle;
@property (readonly, nonatomic) BOOL shouldShowChatChrome;
@property (readonly, nonatomic) BOOL inExpandedPresentation;
@property (readonly, nonatomic) BOOL inFullScreenModalPresentation;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) BOOL wasExpandedPresentation;
@property (retain, nonatomic) NSData *conversationEngramID;
@property (readonly, nonatomic) unsigned long long badgeValue;
@property (nonatomic) long long currentBrowserConsumer;
@property (readonly, nonatomic) UIViewController *remoteViewController;
@property (nonatomic) BOOL shouldDisableSnapshotView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } horizontalSwipeExclusionRect;
@property (readonly, nonatomic) BOOL canReplaceDataSource;
@property (retain, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) long long parentModalPresentationStyle;
@property (readonly, weak, nonatomic) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate;
@property (readonly, nonatomic) BOOL isAlive;
@property (readonly, nonatomic) UIViewController *canvasViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentPPTTestName;
+ (BOOL)supportsMessagesAppExtendedLaunchTest;

- (void)dismiss;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (BOOL)isLoaded;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)beginDisablingUserInteraction;
- (void)didTransitionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (void)endDisablingUserInteraction;
- (void)finishedPPTTestNamed:(id)a0;
- (void)finishedPPTTestNamed:(id)a0 isCKLaunchTest:(BOOL)a1;
- (BOOL)inCompactPresentation;
- (id)initWithBalloonPlugin:(id)a0;
- (id)initWithBalloonPlugin:(id)a0 dataSource:(id)a1;
- (id)initWithBalloonPlugin:(id)a0 pluginPayloads:(id)a1;
- (id)photoBrowserSendDelegate;
- (void)setPhotoBrowserSendDelegate:(id)a0;
- (void)startPPTTestNamed:(id)a0;
- (void)tearDownRemoteViewIfNeeded;
- (void)viewDidTransitionToCompactPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewWillTransitionToExpandedPresentation;

@end
