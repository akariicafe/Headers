@class UIView, NSString, _TVREventHaptic, NSArray, _TVRUICubicSpringAnimator, UIButton, UITableView, NSIndexPath;
@protocol _TVRUIEventDelegate, TVRUIDevice, TVRUIStyleProvider, _TVRUIDevicePickerDelegate;

@interface TVRUIDevicePickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, TVRUIRemoteViewProvider>

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *tableViewWrapper;
@property (retain, nonatomic) UIView *tableViewTopSeperator;
@property (retain, nonatomic) UIView *tableViewBottomSeperator;
@property (nonatomic) double baseHeight;
@property (retain, nonatomic) _TVRUICubicSpringAnimator *showAnimator;
@property (retain, nonatomic) _TVRUICubicSpringAnimator *hideAnimator;
@property (retain, nonatomic) _TVREventHaptic *eventHaptic;
@property (copy, nonatomic) NSIndexPath *connectedDeviceIndex;
@property (retain, nonatomic) UIView *nearbySectionTitleView;
@property (retain, nonatomic) id<TVRUIDevice> device;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonEventDelegate;
@property (retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSString *deviceTitle;
@property (nonatomic, getter=isDevicePickerShowing) BOOL devicePickerShowing;
@property (weak, nonatomic) id<_TVRUIDevicePickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;
- (void)_toggleState;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_buttonReleased:(id)a0;
- (void)_setupDeviceTitleView;
- (void)_setupDeviceList;
- (void)_setupAnimators;
- (void)_setupTitleButtonIfNeeded;
- (void)didTapWrapperView:(id)a0;
- (void)_sortAndReloadDevices;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_preferredTableViewFrameWhenExpanded:(BOOL)a0;
- (BOOL)_accessibilityFontSizesEnabled;
- (double)_expandedContentHeight;
- (double)_calculatedContentHeight;
- (double)_contentHeightForPreferredContentSizeCategory;
- (double)_defaultCalculatedContentHeight;
- (void)expandDeviceList;
- (void)collapseDeviceList;
- (void)didChangeToExpanded:(BOOL)a0;
- (void)_updateTableFrame:(BOOL)a0;

@end
