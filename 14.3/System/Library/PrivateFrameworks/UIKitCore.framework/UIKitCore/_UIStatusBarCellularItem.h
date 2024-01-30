@class NSString, _UIStatusBarCellularSignalView, _UIStatusBarIdentifier, _UIStatusBarImageView, _UIStatusBarStringView;
@protocol _UIStatusBarCellularItemTypeStringProvider;

@interface _UIStatusBarCellularItem : _UIStatusBarItem

@property (class, readonly) _UIStatusBarIdentifier *signalStrengthDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *warningDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *nameDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *typeDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *sosDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *callForwardingDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *rawDisplayIdentifier;

@property (readonly, nonatomic) NSString *cellularDataEntryKey;
@property (retain, nonatomic) _UIStatusBarStringView *serviceNameView;
@property (retain, nonatomic) _UIStatusBarCellularSignalView *signalView;
@property (retain, nonatomic) _UIStatusBarStringView *networkTypeView;
@property (retain, nonatomic) _UIStatusBarImageView *sosView;
@property (retain, nonatomic) _UIStatusBarImageView *warningView;
@property (retain, nonatomic) _UIStatusBarImageView *callForwardingView;
@property (retain, nonatomic) _UIStatusBarStringView *rawStringView;
@property (nonatomic) BOOL showsDisabledSignalBars;
@property (nonatomic) BOOL marqueeServiceName;
@property (weak, nonatomic) id<_UIStatusBarCellularItemTypeStringProvider> typeStringProvider;

+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 typeClass:(Class)a2 allowDualNetwork:(BOOL)a3;

- (void)prepareAnimation:(id)a0 forDisplayItem:(id)a1;
- (void)_create_warningView;
- (BOOL)_updateSignalView:(id)a0 withUpdate:(id)a1 entry:(id)a2 forceShowingDisabledSignalBars:(BOOL)a3;
- (void).cxx_destruct;
- (void)_create_sosView;
- (id)_backgroundColorForUpdate:(id)a0 entry:(id)a1;
- (void)_create_rawStringView;
- (id)_stringForCellularType:(long long)a0;
- (id)entryForDisplayItemWithIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)viewForIdentifier:(id)a0;
- (id)_fillColorForUpdate:(id)a0 entry:(id)a1;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;
- (void)_create_signalView;
- (void)_create_callForwardingView;
- (void)_create_networkTypeView;
- (void)setmarqueeServiceName:(BOOL)a0;
- (BOOL)_showCallFowardingForEntry:(id)a0;
- (id)dependentEntryKeys;
- (void)_create_serviceNameView;

@end
