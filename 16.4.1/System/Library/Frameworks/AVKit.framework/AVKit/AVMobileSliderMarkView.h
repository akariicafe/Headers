@class UIColor, CALayer;

@interface AVMobileSliderMarkView : UIView {
    CALayer *_markColorLayer;
}

@property (retain, nonatomic) UIColor *markColor;

- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
