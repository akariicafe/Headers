@class UIColor, CALayer;

@interface NWKUIAQISegmentView : UIView {
    double _lastLayoutHeight;
    CALayer *_bodyLayer;
    CALayer *_capLayer;
}

@property (readonly) UIColor *color;
@property (readonly, getter=isActive) BOOL active;
@property (readonly) unsigned long long mode;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0 active:(BOOL)a1 mode:(unsigned long long)a2;

@end
