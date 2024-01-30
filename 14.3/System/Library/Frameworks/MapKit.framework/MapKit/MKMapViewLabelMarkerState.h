@interface MKMapViewLabelMarkerState : NSObject

@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) unsigned char balloonBehavior;

+ (id)stateForLabelMarker:(id)a0;

@end
