@class NSArray;

@interface VKLabelMarker : VKFeatureMarker {
    struct shared_ptr<md::LabelMarker> { struct LabelMarker *__ptr_; struct __shared_weak_count *__cntrl_; } _labelMarker;
}

@property (nonatomic) BOOL isDragged;
@property (readonly, nonatomic) NSArray *shields;
@property (readonly, nonatomic) NSArray *transitSystems;
@property (readonly, nonatomic) NSArray *dataIconImageKeys;
@property (readonly, nonatomic) NSArray *iconImageKeys;
@property (readonly, nonatomic) NSArray *imageKeys;
@property (readonly, nonatomic) NSArray *relatedTexts;
@property (readonly, nonatomic) NSArray *relatedSubTexts;

+ (id)markerWithLabelMarker:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker *x0; struct __shared_weak_count *x1; } *)a0;

- (id)locale;
- (int)selectionType;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; })_bounds;
- (BOOL)isCluster;
- (BOOL)isTransit;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (id)featureAnnotation;
- (id)featureHandles;
- (int)sortKey;
- (id)text;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calloutAnchorRect;
- (BOOL)isTrafficIncident;
- (id)routeAnnotations;
- (unsigned long long)clusterFeatureCount;
- (id)mapRegion;
- (id)subtext;
- (id)routeInfo;
- (id)initWithLabelMarkerPtr:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker *x0; struct __shared_weak_count *x1; } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calloutAnchorRect:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lateralCalloutAnchorRect;
- (BOOL)isAlongSelectedTransitLine;
- (BOOL)isTextVisible;
- (BOOL)isOneWayArrow;
- (BOOL)isTrafficCamera;
- (BOOL)isRouteWaypoint;
- (BOOL)isVenueButton;
- (BOOL)isTransitAccessPoint;
- (const unsigned long long *)featureIDs;
- (short)venueLookInsideFloorOrdinal;
- (BOOL)hasVenueLookInsideFloorOrdinal;
- (unsigned char)venueComponentType;
- (id)featureTile;
- (BOOL)positionOfInterest:(struct { double x0; double x1; } *)a0 zoom:(float *)a1;
- (id)waypointInfo;
- (void)setIsPickedIconDrawnExternally:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })calloutAnchorPointWithSnapToPixels:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenCollisionBounds;
- (BOOL)isLabelHitAtScreenPoint:(struct CGPoint { double x0; double x1; })a0 selectableLabelsOnly:(BOOL)a1;
- (unsigned long long)elementCount;
- (id)debugAnchorPointString;
- (BOOL)isLeafCluster;
- (id)clusterContentBounds;
- (id)clusterFeatureAnnotations;
- (BOOL)isClusterChild;
- (id)parentClusterLabelMarker;
- (id)incident;
- (short)venueFloorOrdinal;
- (struct { double x0; double x1; })coordinate;
- (BOOL)isVisible;
- (id).cxx_construct;
- (void)setLabelPressed:(BOOL)a0;
- (unsigned long long)animationID;
- (BOOL)isSelectable;
- (unsigned long long)venueID;
- (BOOL)isRouteAnnotation;
- (unsigned long long)venueBuildingID;
- (BOOL)isTransitLine;
- (BOOL)isFlyoverTour;
- (unsigned long long)countFeatureIDs;
- (unsigned long long)businessID;
- (BOOL)isOnRoute;
- (BOOL)hasBusinessID;
- (BOOL)isRouteEta;
- (unsigned long long)venueComponentID;
- (unsigned char)pickedLabelBalloonBehavior;
- (unsigned long long)venueLevelID;
- (const struct shared_ptr<md::LabelMarker> { struct LabelMarker *x0; struct __shared_weak_count *x1; } *)labelMarkerImpl;
- (int)featureType;
- (id)trafficCamera;

@end
