@class MKUserLocationView;

@interface _MKUserLocationInternalView : _MKUserLocationView

@property (weak, nonatomic) MKUserLocationView *parentView;

- (id)_containerView;
- (id)_mapView;
- (void).cxx_destruct;
- (id)_annotationContainer;
- (double)_pointsForDistance:(double)a0;

@end
