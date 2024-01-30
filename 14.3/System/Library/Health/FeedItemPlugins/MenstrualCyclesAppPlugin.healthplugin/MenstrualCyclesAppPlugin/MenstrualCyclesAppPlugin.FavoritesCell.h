@interface MenstrualCyclesAppPlugin.FavoritesCell : MenstrualCyclesAppPlugin.ListCell <WDFavoriteDisplayTypesControllerObserver> {
    void /* unknown type, empty encoding */ favoriteIndicator;
    void /* unknown type, empty encoding */ isFavorited;
}

@property (nonatomic, readonly) BOOL accessibilityIsFavorited;

- (void)favoriteDisplayTypesControllerReady:(id)a0;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
