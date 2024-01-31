@class NSArray;

@interface CoreAudioKit.AUVerticalTabView : UIControl {
    void /* unknown type, empty encoding */ horizontal;
    void /* unknown type, empty encoding */ tabs;
    void /* unknown type, empty encoding */ accessibleElements;
    void /* unknown type, empty encoding */ selectedTabIndex;
    void /* unknown type, empty encoding */ numActiveTabs;
    void /* unknown type, empty encoding */ maxTabDimension;
    void /* unknown type, empty encoding */ tabDimension;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;

@end
