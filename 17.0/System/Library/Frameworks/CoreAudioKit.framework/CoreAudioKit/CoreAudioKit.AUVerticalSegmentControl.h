@class NSArray;

@interface CoreAudioKit.AUVerticalSegmentControl : UIControl {
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ accessibleElements;
    void /* unknown type, empty encoding */ columnCount;
    void /* unknown type, empty encoding */ selectedSegmentIndex;
    void /* unknown type, empty encoding */ segmentHeight;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)segmentEnabledChangedWithNotification:(id)a0;
- (void)segmentSelectionChangedWithNotification:(id)a0;

@end
