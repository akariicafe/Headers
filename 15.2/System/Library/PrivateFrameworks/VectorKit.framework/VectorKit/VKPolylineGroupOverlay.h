@class NSString, NSMutableSet, GEOMapRegion, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : NSObject <VKRouteOverlay> {
    struct __CFSet { } *_observers;
}

@property (readonly, nonatomic) NSMutableSet *polylines;
@property (retain, nonatomic) VKPolylineOverlay *selectedPolyline;
@property (retain, nonatomic) VKPolylineOverlay *focusedPolyline;
@property (readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) BOOL containsTransit;
@property (nonatomic) BOOL showTraffic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBoundingMapRegion;
- (void)addObserver:(id)a0;
- (void)removePolyline:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addPolyline:(id)a0;
- (void)_updateContainsTransit;

@end
