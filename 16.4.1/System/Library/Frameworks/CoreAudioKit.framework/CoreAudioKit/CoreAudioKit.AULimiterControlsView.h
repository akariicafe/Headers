@class NSArray;

@interface CoreAudioKit.AULimiterControlsView : UIView {
    void /* unknown type, empty encoding */ knobs;
    void /* unknown type, empty encoding */ previousWidth;
    void /* unknown type, empty encoding */ spacingConstraints;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ meter;
@property (nonatomic, copy) NSArray *knobs;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setMeterLabel:(id)a0;

@end
