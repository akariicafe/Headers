@class MSStickerBrowserView, NSString;

@interface MSStickerBrowserViewController : UIViewController <MSRootViewControllerProtocol, MSStickerBrowserViewDataSource>

@property (retain, nonatomic) MSStickerBrowserView *stickerBrowserView;
@property (nonatomic) BOOL viewHasAppeared;
@property (readonly, nonatomic) long long stickerSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrameBeforeAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfStickersInStickerBrowserView:(id)a0;
- (id)stickerBrowserView:(id)a0 stickerAtIndex:(long long)a1;
- (void)enableUserInteraction;
- (void)didTransitionToPresentationStyle:(unsigned long long)a0;
- (void)disableUserInteraction;
- (id)initWithStickerSize:(long long)a0;
- (void)updateSnapshotWithCompletionBlock:(id /* block */)a0;
- (void)willTransitionToPresentationStyle:(unsigned long long)a0;

@end
