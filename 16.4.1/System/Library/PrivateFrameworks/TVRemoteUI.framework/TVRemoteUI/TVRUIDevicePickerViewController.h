@class UIView, NSString, TVRUICubicSpringAnimator, NSArray, UIButton, UITableView, TVREventHaptic, NSIndexPath;
@protocol _TVRUIEventDelegate, TVRUIDevice, TVRUIStyleProvider, TVRUIDevicePickerDelegate;

@interface TVRUIDevicePickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, TVRUIRemoteViewProvider>

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *tableViewWrapper;
@property (retain, nonatomic) UIView *tableViewTopSeperator;
@property (retain, nonatomic) UIView *tableViewBottomSeperator;
@property (nonatomic) double baseHeight;
@property (retain, nonatomic) TVRUICubicSpringAnimator *showAnimator;
@property (retain, nonatomic) TVRUICubicSpringAnimator *hideAnimator;
@property (retain, nonatomic) TVREventHaptic *eventHaptic;
@property (copy, nonatomic) NSIndexPath *connectedDeviceIndex;
@property (retain, nonatomic) UIView *nearbySectionTitleView;
@property (retain, nonatomic) id<TVRUIDevice> device;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonEventDelegate;
@property (retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSString *deviceTitle;
@property (nonatomic, getter=isDevicePickerShowing) BOOL devicePickerShowing;
@property (weak, nonatomic) id<TVRUIDevicePickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enabled;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)_toggleState;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)_buttonPressed:(id)a0;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (void)_updateViewState;
- (void)_buttonReleased:(id)a0;
- (double)_defaultCalculatedContentHeight;
- (void)_setupAnimators;
- (BOOL)_accessibilityFontSizesEnabled;
- (double)_calculatedContentHeight;
- (double)_contentHeightForPreferredContentSizeCategory;
- (double)_expandedContentHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_preferredTableViewFrameWhenExpanded:(BOOL)a0;
- (void)_setupDeviceList;
- (void)_setupDeviceTitleView;
- (void)_setupTitleButtonIfNeeded;
- (void)_sortAndReloadDevices;
- (void)_updateTableFrame:(BOOL)a0;
- (void)collapseDeviceList;
- (void)didChangeToExpanded:(BOOL)a0;
- (void)didTapWrapperView:(id)a0;
- (void)expandDeviceList;

@end
