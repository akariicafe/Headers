@class UIColor, CALayer;

@interface AVMobileSliderMarkView : UIView {
    CALayer *_markColorLayer;
}

@property (retain, nonatomic) UIColor *markColor;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
