@interface UIStatusBarThermalColorItemView : UIStatusBarItemView {
    int _thermalColor;
    BOOL _sunlightMode;
}

- (id)contentsImage;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (id)_color;

@end
