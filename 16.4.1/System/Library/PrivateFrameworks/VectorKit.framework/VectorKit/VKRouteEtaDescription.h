@class NSString, GEOFeatureStyleAttributes;

@interface VKRouteEtaDescription : NSObject {
    struct _retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; NSString *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _etaText;
}

@property (readonly, nonatomic) NSString *etaText;
@property (readonly, nonatomic) unsigned char glyphType;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) long long routeEtaType;

- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithEtaText:(id)a0 etaAdvisoryStyleAttributes:(id)a1;
- (id)initWithEtaText:(id)a0 etaAdvisoryStyleAttributes:(id)a1 routeEtaType:(long long)a2;
- (id)initWithEtaText:(id)a0 glyphType:(unsigned char)a1;
- (id)initWithEtaText:(id)a0 etaAdvisoryFeatureStyleAttributes:(id)a1 routeEtaType:(long long)a2;
- (id)_initWithEtaText:(id)a0 styleAttributes:(id)a1 routeEtaType:(long long)a2;
- (id)initWithEtaText:(id)a0;
- (id)initWithEtaText:(id)a0 etaAdvisoryFeatureStyleAttributes:(id)a1;

@end
