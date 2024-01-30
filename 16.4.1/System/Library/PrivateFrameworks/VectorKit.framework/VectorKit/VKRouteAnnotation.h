@class GEOStyleAttributes, GEOMiniCard, GEOComposedRouteAnnotation;

@interface VKRouteAnnotation : VKTrafficFeature {
    GEOComposedRouteAnnotation *_routeAnnotation;
}

@property (readonly, nonatomic, getter=_originalStyleAttributes) GEOStyleAttributes *originalStyleAttributes;
@property (readonly, nonatomic) GEOMiniCard *infoCard;

- (void).cxx_destruct;
- (id)initWithRouteAnnotation:(id)a0 onRoute:(id)a1;
- (void)populateDebugNode:(void *)a0;

@end
