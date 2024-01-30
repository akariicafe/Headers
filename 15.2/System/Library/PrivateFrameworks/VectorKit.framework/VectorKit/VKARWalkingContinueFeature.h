@class NSString, GEOComposedRoute;

@interface VKARWalkingContinueFeature : VKARWalkingFeature {
    struct _retain_ptr<GEOComposedRoute *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; GEOComposedRoute *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _route;
    struct _retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; NSString *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _displayText;
}

@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int index; float offset; } start; struct PolylineCoordinate { unsigned int index; float offset; } end; } range;
@property (readonly, nonatomic) GEOComposedRoute *route;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setDisplayText:(id)a0;
- (id).cxx_construct;
- (id)initWithRoute:(id)a0 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1 displayText:(id)a2;
- (void)setRoute:(id)a0;

@end
