@class MKUserLocationView;

@interface _MKUserLocationInternalView : _MKUserLocationView

@property (weak, nonatomic) MKUserLocationView *parentView;

- (void).cxx_destruct;
- (id)_mapView;
- (id)_annotationContainer;
- (id)_containerView;
- (double)_pointsForDistance:(double)a0;

@end
