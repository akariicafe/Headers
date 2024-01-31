@class UIColor, CALayer;

@interface AVMobileFluidSliderMarkView : UIView {
    CALayer *_markColorLayer;
}

@property (retain, nonatomic) UIColor *markColor;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
