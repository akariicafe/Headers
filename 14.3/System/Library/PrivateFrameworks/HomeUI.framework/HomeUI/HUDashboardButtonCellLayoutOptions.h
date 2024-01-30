@interface HUDashboardButtonCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) double horizontalPadding;
@property (nonatomic) double verticalPadding;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })dashboardButtonCellSizeForTitle:(id)a0 forContentSizeCategory:(id)a1;

@end
