@interface HealthExperienceUI.DataTypeDetailFavoritesCell : UICollectionViewCell <WDFavoriteDisplayTypesControllerObserver> {
    void /* unknown type, empty encoding */ favoritesController;
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ item;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ platterView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ favoriteButton;
@property (nonatomic) BOOL highlighted;

- (void)favoriteButtonToggled:(id)a0;
- (void)favoriteDisplayTypesControllerReady:(id)a0;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)awakeFromNib;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
