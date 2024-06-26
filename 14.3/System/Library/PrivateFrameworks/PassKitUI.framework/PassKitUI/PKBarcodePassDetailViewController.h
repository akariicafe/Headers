@class NSMutableDictionary, NSObject, PKSettingTableCell, UIView, UIRefreshControl, NSString, PKBarcodeTableViewCell, PKPassDisplayProfile, PKLinkedAppView, PKPassColorProfile, PKPass, UITableViewCell, BluetoothManager, PKPassHeaderView;
@protocol OS_dispatch_source, PKPassDeleteHandler;

@interface PKBarcodePassDetailViewController : PKSectionTableViewController <UITextViewDelegate, PKPassHeaderViewDelegate> {
    PKPassDisplayProfile *_displayProfile;
    PKPassColorProfile *_colorProfile;
    PKLinkedAppView *_linkedApp;
    UIView *_locationHelpView;
    UIRefreshControl *_refreshControl;
    PKSettingTableCell *_automaticUpdatesCell;
    PKSettingTableCell *_showNotificationsCell;
    PKSettingTableCell *_showInLockScreenCell;
    PKSettingTableCell *_automaticSelectionCell;
    UITableViewCell *_personalizePassCell;
    UITableViewCell *_deleteCell;
    PKBarcodeTableViewCell *_barcodeCell;
    NSMutableDictionary *_fieldCellsByRow;
    NSObject<OS_dispatch_source> *_refreshTimeout;
    BluetoothManager *_btManager;
    BOOL _isBluetoothEnabled;
    BOOL _isLocationEnabled;
    BOOL _isWifiEnabled;
    BOOL _showsLinks;
    double _headerHeight;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _headerContentInset;
    struct CGSize { double width; double height; } _previousLayoutTableViewBoundsSize;
    double _titleOpacity;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _headerFrame;
    UIView *_headerView;
    PKPassHeaderView *_passHeaderView;
    BOOL _didRampScreenBrightness;
    unsigned char _visiblityState;
}

@property (readonly, nonatomic) PKPass *pass;
@property (nonatomic) unsigned long long suppressedContent;
@property (weak, nonatomic) id<PKPassDeleteHandler> deleteOverrider;
@property (nonatomic) BOOL showDoneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isWifiEnabled;

- (BOOL)reloadData;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_done:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithStyle:(long long)a0 numberOfSections:(unsigned long long)a1;
- (void)loadView;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)reloadSections:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)_updateNavigationItem;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)_relevantBuckets;
- (id)linkedApp;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateStandardAppearance:(id)a0;
- (void)_updatePassProperties;
- (void)_wifiChanged:(id)a0;
- (void)_bluetoothPowerChanged:(id)a0;
- (void)_passSettingsChanged:(id)a0;
- (BOOL)shouldAllowRefresh;
- (void)refreshControlValueChanged:(id)a0;
- (BOOL)_updateHeaderHeight;
- (double)_offscreenHeaderHeight;
- (BOOL)_linkedAppAvailable;
- (BOOL)_settingsAvailable;
- (BOOL)_personalizeAvailable;
- (void)reloadSection:(unsigned long long)a0;
- (long long)rowAnimationForReloadingSection:(unsigned long long)a0;
- (id)_locationHelpTextWithLink:(id *)a0 linkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)_numberOfAvailableSettings;
- (id)_settingsCellForRow:(unsigned long long)a0;
- (id)_automaticSelectionCell;
- (id)_personalizePassCell;
- (id)_deleteCell;
- (id)_barcodeCell;
- (id)_fieldCellForRow:(unsigned long long)a0;
- (void)_deletePass;
- (id)_locationHelpViewForTableView:(id)a0;
- (void)_reloadPassAndView;
- (void)_sharePass;
- (void)pushSettingsFromViewToModel;
- (unsigned long long)_settingForRow:(unsigned long long)a0;
- (id)_fieldForRow:(unsigned long long)a0;
- (void)_refreshFinished:(BOOL)a0;
- (void)passHeaderViewDidChangePass:(id)a0;
- (void)setShowsLinks:(BOOL)a0;
- (BOOL)_isBluetoothEnabled;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_canShowWhileLocked;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)initWithPass:(id)a0;
- (void)viewWillLayoutSubviews;

@end
