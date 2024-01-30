@class CKBrowserSwitcherFooterView, NSString, CKBrowserSwitcherFooterViewDataSource, IMAAppPresenter, UIViewController;
@protocol IMADockViewControllerDelegate;

@interface IMADockViewController : UIViewController <CKBrowserSwitcherFooterViewDelegate> {
    CKBrowserSwitcherFooterView *_appStrip;
    CKBrowserSwitcherFooterViewDataSource *_appStripDataSource;
    IMAAppPresenter *_appPresenter;
}

@property (weak, nonatomic) id<IMADockViewControllerDelegate> delegate;
@property (nonatomic) BOOL alwaysPresentAppsExpanded;
@property (nonatomic) BOOL showIconBorders;
@property (readonly, nonatomic) double minimizedDockHeight;
@property (readonly, nonatomic) UIViewController *currentAppViewController;
@property (nonatomic) BOOL hidesCompactAppForStickerDrag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appStrip;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateAppStripFrame;
- (void)switcherView:(id)a0 didMagnify:(BOOL)a1;
- (void)switcherView:(id)a0 didSelectPluginAtIndex:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)cleanupRunningApps;
- (void)hideAppViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)imageViewForSticker:(id)a0;

@end
