@class NSString, _UIStatusBarCellularSignalView, _UIStatusBarIdentifier, _UIStatusBarImageView, _UIStatusBarStringView;
@protocol _UIStatusBarCellularItemTypeStringProvider;

@interface _UIStatusBarCellularItem : _UIStatusBarItem

@property (class, readonly) _UIStatusBarIdentifier *signalStrengthDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *warningDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *nameDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *typeDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *callForwardingDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *rawDisplayIdentifier;

@property (readonly, nonatomic) NSString *cellularDataEntryKey;
@property (retain, nonatomic) _UIStatusBarStringView *serviceNameView;
@property (retain, nonatomic) _UIStatusBarCellularSignalView *signalView;
@property (retain, nonatomic) _UIStatusBarStringView *networkTypeView;
@property (retain, nonatomic) _UIStatusBarImageView *warningView;
@property (retain, nonatomic) _UIStatusBarImageView *callForwardingView;
@property (retain, nonatomic) _UIStatusBarStringView *rawStringView;
@property (nonatomic) BOOL showsDisabledSignalBars;
@property (nonatomic) BOOL marqueeServiceName;
@property (weak, nonatomic) id<_UIStatusBarCellularItemTypeStringProvider> typeStringProvider;

+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 typeClass:(Class)a2 allowDualNetwork:(BOOL)a3;

- (BOOL)_showCallFowardingForEntry:(id)a0;
- (void)_create_signalView;
- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)_updateSignalView:(id)a0 withUpdate:(id)a1 entry:(id)a2 forceShowingDisabledSignalBars:(BOOL)a3;
- (id)dependentEntryKeys;
- (id)entryForDisplayItemWithIdentifier:(id)a0;
- (id)_stringForCellularType:(long long)a0;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;
- (void)_create_rawStringView;
- (void)_create_warningView;
- (void)_create_networkTypeView;
- (id)_fillColorForUpdate:(id)a0 entry:(id)a1;
- (void)_create_callForwardingView;
- (void)prepareAnimation:(id)a0 forDisplayItem:(id)a1;
- (void)setmarqueeServiceName:(BOOL)a0;
- (void)_create_serviceNameView;
- (void).cxx_destruct;
- (id)_backgroundColorForUpdate:(id)a0 entry:(id)a1;

@end
