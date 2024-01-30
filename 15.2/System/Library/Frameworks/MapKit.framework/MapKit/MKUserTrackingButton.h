@class MKMapView, _MKUserTrackingButton;

@interface MKUserTrackingButton : UIView {
    _MKUserTrackingButton *_button;
}

@property (weak, nonatomic) MKMapView *mapView;

+ (id)userTrackingButtonWithMapView:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)addInteraction:(id)a0;
- (void)removeInteraction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 button:(id)a1;

@end
