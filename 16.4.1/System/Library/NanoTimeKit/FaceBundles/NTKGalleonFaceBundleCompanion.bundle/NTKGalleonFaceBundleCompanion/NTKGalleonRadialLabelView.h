@class NSArray, NSString, CLKFont;

@interface NTKGalleonRadialLabelView : UIView <NTKGalleonProgressSettable> {
    CLKFont *_labelFont;
    double _progress;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutFrame;
    double _layoutPadding;
}

@property (readonly, nonatomic) double diameter;
@property (readonly, nonatomic) BOOL rightSideUp;
@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) struct { double minimum; double maximum; } paddingRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_positionLabels;
- (void)_setupImageLabels;
- (void)galleon_setProgress:(double)a0;
- (id)initWithDialDiameter:(double)a0 rightSideUp:(BOOL)a1 labels:(id)a2 paddingRange:(struct { double x0; double x1; })a3;

@end
