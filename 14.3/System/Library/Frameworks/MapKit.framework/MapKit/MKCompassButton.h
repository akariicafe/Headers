@class MKMapView, UIView;
@protocol MKCompassView;

@interface MKCompassButton : UIView {
    UIView<MKCompassView> *_compassView;
    BOOL _visible;
}

@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long compassVisibility;

+ (id)compassButtonWithMapView:(id)a0;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mapView:(id)a1;
- (void)didTapCompassGesture:(id)a0;
- (void)mapViewDidUpdateYawNotification:(id)a0;
- (void)addInteraction:(id)a0;
- (void)_updateVisibility;
- (void)removeInteraction:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
