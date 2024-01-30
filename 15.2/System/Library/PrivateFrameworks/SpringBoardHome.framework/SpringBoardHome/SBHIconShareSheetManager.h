@class UIViewController, NSString, SBIconView, UIView, SBHIconManager;

@interface SBHIconShareSheetManager : NSObject <SKStoreProductActivityViewControllerDelegate>

@property (weak, nonatomic) SBHIconManager *iconManager;
@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) UIView *fakeSourceView;
@property (retain, nonatomic) UIViewController *shareSheetViewController;
@property (readonly, nonatomic) BOOL areAnyAppIconShareSheetsShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIconManager:(id)a0;
- (void).cxx_destruct;
- (void)_appIconForceTouchControllerDidDismissNotification:(id)a0;
- (void)dealloc;
- (void)dismissIconShareSheetsIfNecessaryAndCleanUp;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconViewFrameInScreenCoordinateSpace:(id)a0;
- (void)_createFakeSourceViewForIconView:(id)a0;
- (void)_queueShareSheetPresentation:(id)a0 forIconView:(id)a1;
- (void)_presentShareSheet:(id)a0 forIconView:(id)a1;
- (id)_shareSheetPresentationViewControllerForIconView:(id)a0;
- (void)productActivityViewController:(id)a0 didFinishWithResult:(unsigned long long)a1;
- (void)presentShareSheetForIconView:(id)a0 withAppStoreItemIdentifier:(id)a1;
- (void)presentShareSheetForIconView:(id)a0 withActivityItems:(id)a1;

@end
