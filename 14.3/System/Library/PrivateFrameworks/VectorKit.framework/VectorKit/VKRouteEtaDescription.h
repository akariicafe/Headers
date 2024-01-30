@class NSString, GEOFeatureStyleAttributes;

@interface VKRouteEtaDescription : NSObject {
    struct _retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; NSString *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _etaText;
}

@property (readonly, nonatomic) NSString *etaText;
@property (readonly, nonatomic) unsigned char glyphType;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;

- (void).cxx_destruct;
- (id)initWithEtaText:(id)a0;
- (id)initWithEtaText:(id)a0 styleAttributes:(id)a1;
- (void)dealloc;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEtaText:(id)a0 glyphType:(unsigned char)a1;
- (id)initWithEtaText:(id)a0 etaAdvisoryStyleAttributes:(id)a1;

@end
