@class UICellConfigurationState;

@interface HUDashboardFilterCategoryCell : UICollectionViewListCell <HUGridCellProtocol, HUTileCellProtocol, HUReorderableCellProtocol>

@property (nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;
@property (nonatomic, retain) void /* unknown type, empty encoding */ layoutOptions;
@property (nonatomic) void /* unknown type, empty encoding */ cellContentsHidden;
@property (nonatomic, retain) void /* unknown type, empty encoding */ item;
@property (nonatomic) void /* unknown type, empty encoding */ backgroundDisplayStyle;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundEffectGrouper;
@property (nonatomic) void /* unknown type, empty encoding */ rearranging;

+ (Class)layoutOptionsClass;

- (void)updateUIWithAnimation:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;
- (BOOL)areCellContentsHidden;
- (BOOL)isRearranging;

@end
