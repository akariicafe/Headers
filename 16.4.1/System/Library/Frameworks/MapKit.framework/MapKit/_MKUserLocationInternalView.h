@class MKUserLocationView;

@interface _MKUserLocationInternalView : _MKUserLocationView

@property (weak, nonatomic) MKUserLocationView *parentView;

- (id)_containerView;
- (void).cxx_destruct;
- (id)_mapView;
- (id)_annotationContainer;
- (double)_pointsForDistance:(double)a0;

@end
