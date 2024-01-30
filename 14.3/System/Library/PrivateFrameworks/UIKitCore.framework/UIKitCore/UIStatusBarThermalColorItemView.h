@interface UIStatusBarThermalColorItemView : UIStatusBarItemView {
    int _thermalColor;
    BOOL _sunlightMode;
}

- (id)_color;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (id)contentsImage;

@end
