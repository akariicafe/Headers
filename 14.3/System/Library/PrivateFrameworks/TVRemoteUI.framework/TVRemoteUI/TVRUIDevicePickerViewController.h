@class UIView, NSString, _TVREventHaptic, NSArray, _TVRUICubicSpringAnimator, UIButton, UITableView, NSIndexPath;
@protocol _TVRUIDevicePickerDelegate, TVRUIStyleProvider;

@interface TVRUIDevicePickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

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
@property (retain, nonatomic) NSArray *nearbyUnpairedDevices;
@property (retain, nonatomic) UIView *nearbySectionTitleView;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSString *deviceTitle;
@property (nonatomic, getter=isDevicePickerShowing) BOOL devicePickerShowing;
@property (weak, nonatomic) id<_TVRUIDevicePickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_toggleState;
- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)_expandedContentHeight;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_setupDeviceTitleView;
- (void)_setupDeviceList;
- (void)_setupAnimators;
- (void)_setupTitleButtonIfNeeded;
- (void)didTapWrapperView:(id)a0;
- (void)_processForUnpairedDevices:(id)a0;
- (void)_sortAndReloadDevices;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_preferredTableViewFrameWhenExpanded:(BOOL)a0;
- (id)_titleViewForNearbySection;
- (BOOL)_accessibilityFontSizesEnabled;
- (double)_calculatedContentHeight;
- (double)_contentHeightForPreferredContentSizeCategory;
- (double)_defaultCalculatedContentHeight;
- (void)expandDeviceList;
- (void)collapseDeviceList;
- (void)didChangeToExpanded:(BOOL)a0;
- (void)_updateTableFrame:(BOOL)a0;

@end
