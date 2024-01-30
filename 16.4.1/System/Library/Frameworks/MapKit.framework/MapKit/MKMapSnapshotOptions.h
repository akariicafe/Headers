@class GEOComposedRoute, VKRouteContext, NSArray, GEOApplicationAuditToken, MKPointOfInterestFilter, UITraitCollection, MKMapCamera;
@protocol VKRouteOverlay;

@interface MKMapSnapshotOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL usingRect;
@property (readonly, nonatomic, getter=_viewportMode) long long viewportMode;
@property (nonatomic, getter=_showsNightMode, setter=_setShowsNightMode:) BOOL showsNightMode;
@property (nonatomic, getter=_showsVenues, setter=_setShowsVenues:) BOOL showsVenues;
@property (nonatomic, getter=_showsRoadLabels, setter=_setShowsRoadLabels:) BOOL showsRoadLabels;
@property (nonatomic, getter=_showsRoadShields, setter=_setShowsRoadShields:) BOOL showsRoadShields;
@property (nonatomic, getter=_showsPointLabels, setter=_setShowsPointLabels:) BOOL showsPointLabels;
@property (nonatomic, getter=_allowsSimultaneousLightDarkSnapshots, setter=_setAllowsSimultaneousLightDarkSnapshots:) BOOL allowsSimultaneousLightDarkSnapshots;
@property (nonatomic, getter=_cartographicConfiguration, setter=_setCartographicConfiguration:) struct { long long style; long long emphasis; long long projection; long long terrainMode; long long mapkitUsage; BOOL gridOnly; } cartographicConfiguration;
@property (nonatomic, getter=_showsAppleLogo, setter=_setShowsAppleLogo:) BOOL showsAppleLogo;
@property (nonatomic, getter=_rendersInBackground, setter=_setRendersInBackground:) BOOL rendersInBackground;
@property (nonatomic, getter=_useSnapshotService, setter=_setUseSnapshotService:) BOOL useSnapshotService;
@property (nonatomic, getter=_snapshotServiceSerialPerProcess, setter=_setSnapshotServiceSerialPerProcess:) BOOL snapshotServiceSerialPerProcess;
@property (nonatomic, getter=_edgeInsets, setter=_setEdgeInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) unsigned long long signpostId;
@property (retain, nonatomic, getter=_composedRouteForRouteLine, setter=_setComposedRouteForRouteLine:) GEOComposedRoute *composedRouteForRouteLine;
@property (retain, nonatomic, getter=_routeContext, setter=_setRouteContext:) VKRouteContext *routeContext;
@property (retain, nonatomic, getter=_routeOverlay, setter=_setRouteOverlay:) id<VKRouteOverlay> routeOverlay;
@property (copy, nonatomic) NSArray *annotationViews;
@property (nonatomic, getter=_searchResultsType, setter=_setSearchResultsType:) unsigned char searchResultsType;
@property (copy, nonatomic, getter=_customFeatureAnnotations, setter=_setCustomFeatureAnnotations:) NSArray *customFeatureAnnotations;
@property (retain, nonatomic, getter=_auditToken, setter=_setAuditToken:) GEOApplicationAuditToken *auditToken;
@property (copy, nonatomic) MKMapCamera *camera;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } mapRect;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } region;
@property (nonatomic) unsigned long long mapType;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (copy, nonatomic) UITraitCollection *traitCollection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)showsPointsOfInterest;
- (BOOL)isEqual:(id)a0;
- (void)_prepareToSubmit;
- (void)setShowsPointsOfInterest:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;

@end
