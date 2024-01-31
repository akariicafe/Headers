@class NSString, NSArray, NSMutableArray;

@interface VKRoadFeatureAccessibilityElement : VKMultiSectionFeatureAccessibilityElement {
    NSMutableArray *_expandedPaths;
    NSMutableArray *_gutterPaths;
    BOOL _lastHitTestNearBorder;
    NSArray *_allPoints;
}

@property (retain, nonatomic) NSString *roadDirection;
@property (retain, nonatomic) NSArray *intersectingRoads;
@property (readonly, nonatomic) NSMutableArray *originalPaths;
@property (nonatomic) int travelDirection;
@property (retain, nonatomic) NSArray *consolidatedAndOrderedFeatures;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (void)_updatePath;
- (float)_accessibilityDistance:(struct CGPoint { double x0; double x1; })a0 forAngle:(float)a1 toRoad:(id)a2;
- (float)_accessibilityDistanceFromEndOfRoad:(struct CGPoint { double x0; double x1; })a0 forAngle:(float)a1;
- (BOOL)_accessibilityLastHitTestNearBorder;
- (long long)_accessibilityMapFeatureType;
- (void)_accessibilityMapsExplorationBeginFromCurrentElement;
- (BOOL)_accessibilityRoadContainsTrackingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_accessibilityUpcomingRoadsForPoint:(struct CGPoint { double x0; double x1; })a0 forAngle:(float)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0;
- (struct AXVKFeaturePointIndices { long long x0; long long x1; })featureAndPointIndicesForPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)_accessibilityMapRoadType;
- (id)_axRoadPrefix;
- (id)_axRoadSuffix;
- (void)_combineRoadPaths:(id)a0;
- (id)_nearestIntersectionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_nearestPOIsForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_roadDirectionDescription;
- (id)_roadLength;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_roadSuffixRangeForCommonRoadAbbreviations:(id)a0 replacement:(id *)a1;
- (id)accessibilityPaths;
- (id)accessibilitySortedIntersectorsForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityViableIntersectorsForPoint:(struct CGPoint { double x0; double x1; })a0 fromSortedArray:(id)a1 isStart:(BOOL)a2;
- (id)adjacentIntersectorsForPoint:(struct CGPoint { double x0; double x1; })a0 isStart:(BOOL)a1;
- (id)consolidatedAndOrderedFeaturesFromAllFeaturePoints:(id)a0;
- (id)detailedFeatureElementInfoAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)trueLabel;

@end
