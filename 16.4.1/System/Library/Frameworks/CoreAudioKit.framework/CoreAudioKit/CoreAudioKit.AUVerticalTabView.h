@class NSArray;

@interface CoreAudioKit.AUVerticalTabView : UIControl {
    void /* unknown type, empty encoding */ horizontal;
    void /* unknown type, empty encoding */ tabs;
    void /* unknown type, empty encoding */ accessibleElements;
    void /* unknown type, empty encoding */ tabDimension;
}

@property (nonatomic) void /* unknown type, empty encoding */ selectedTabIndex;
@property (nonatomic) void /* unknown type, empty encoding */ numActiveTabs;
@property (nonatomic) void /* unknown type, empty encoding */ maxTabDimension;
@property (nonatomic, copy) NSArray *accessibilityElements;

- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 data:(id)a1 horizontal:(BOOL)a2;

@end
