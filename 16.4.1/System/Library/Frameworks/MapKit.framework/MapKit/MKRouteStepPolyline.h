@class NSString, MKRoutePolyline;

@interface MKRouteStepPolyline : MKPolyline <MKDirectionsResponsePolyline> {
    MKRoutePolyline *_fullRoute;
}

@property (readonly, nonatomic, getter=_requiresModernMap) BOOL requiresModernMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
