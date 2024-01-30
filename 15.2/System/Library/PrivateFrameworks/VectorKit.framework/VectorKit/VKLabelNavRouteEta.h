@class NSString, VKRouteEtaDescription, VKRouteInfo, VKLabelNavRoadLabel;

@interface VKLabelNavRouteEta : NSObject <VKLabelNavFeature> {
    unsigned long long _etaLabelArtworkKey;
    unsigned char _orientation;
}

@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double x0[3]; } worldPoint;
@property (readonly, nonatomic) VKLabelNavRoadLabel *label;
@property (nonatomic) BOOL selected;
@property (readonly, nonatomic) unsigned char etaComparisonToMain;
@property (retain, nonatomic) VKRouteInfo *routeInfo;
@property (readonly, nonatomic) VKRouteEtaDescription *displayEtaDescription;
@property (nonatomic) BOOL isRepositioning;
@property (nonatomic) unsigned char orientation;
@property (nonatomic) struct optional<gss::When> { union { char __null_state_; unsigned char __val_; } ; BOOL __engaged_; } when;
@property (readonly, nonatomic) double worldUnitsPerMeterAtPoint;
@property (nonatomic) BOOL didStyleChange;
@property (readonly, nonatomic) BOOL isOnRoute;
@property (readonly, nonatomic) BOOL isAwayFromRoute;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeOffset;
@property (readonly, nonatomic) BOOL isRamp;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shieldDisplayGroup;
@property (readonly, nonatomic) BOOL isStartOfRoadName;
@property (readonly, nonatomic) BOOL isInGuidance;
@property (readonly, nonatomic) long long intraRoadPriority;
@property (readonly, nonatomic) BOOL isGuidanceStepStart;
@property (readonly, nonatomic) BOOL isEtaFeature;
@property (readonly, nonatomic) BOOL isTrafficCameraFeature;
@property (nonatomic) BOOL isPicked;

+ (struct vector<GeoCodecsFeatureStylePair, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> { struct GeoCodecsFeatureStylePair *x0; struct GeoCodecsFeatureStylePair *x1; struct __compressed_pair<GeoCodecsFeatureStylePair *, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> { struct GeoCodecsFeatureStylePair *x0; struct StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator> { struct Allocator *x0; } x1; } x2; })baseAttributesForEtaLabel:(BOOL)a0 focused:(BOOL)a1 etaComparison:(unsigned char)a2 transportType:(unsigned char)a3 navLabelType:(unsigned char)a4 when:(struct optional<gss::When> { union { char x0; unsigned char x1; } x0; BOOL x1; })a5 additionalAttributes:(id)a6;
+ (unsigned char)toStyleEtaComparison:(unsigned char)a0;
+ (unsigned char)toStyleNavLabelType:(long long)a0;
+ (struct RoadSignStyleGroup { struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; } x0; struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; } x1; struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; } x2; })styleForNavContext:(const struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0 selected:(BOOL)a1 focused:(BOOL)a2 etaComparison:(unsigned char)a3 transportType:(unsigned char)a4 navLabelType:(unsigned char)a5 when:(struct optional<gss::When> { union { char x0; unsigned char x1; } x0; BOOL x1; })a6 additionalAttributes:(id)a7;
+ (id)artworkForEtaDescription:(id)a0 navContext:(const struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a1 roadSignStyleGroup:(const void *)a2 mercatorPoint:(const void *)a3 orientation:(unsigned char)a4 isSelected:(BOOL)a5 artworkCache:(void *)a6;

- (void)_clearLabel;
- (void)repositionAtRouteCoord:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (struct _retain_ptr<VKLabelNavRoadLabel *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **x0; id x1; struct _retain_objc { } x2; struct _release_objc { } x3; })updateRoadSignWithNavContext:(const struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0 artworkCache:(void *)a1;
- (id)initWithRouteInfo:(id)a0 routeCoord:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (void)createLabelWithNavContext:(const struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0 orientation:(unsigned char)a1 etaDescription:(id)a2 selected:(BOOL)a3 when:(struct optional<gss::When> { union { char x0; unsigned char x1; } x0; BOOL x1; })a4 artworkCache:(void *)a5;
- (void)layoutWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)prepareStyleVarsWithContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;

@end
