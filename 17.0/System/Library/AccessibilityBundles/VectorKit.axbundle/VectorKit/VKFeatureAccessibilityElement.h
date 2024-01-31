@class NSMutableDictionary, NSString, NSMutableSet, NSMutableArray;

@interface VKFeatureAccessibilityElement : UIAccessibilityElement

@property (nonatomic) int style;
@property (nonatomic) unsigned long long shieldType;
@property (readonly, nonatomic) NSMutableSet *featureSet;
@property (retain, nonatomic) NSMutableDictionary *pointToFeatureDict;
@property (retain, nonatomic) NSMutableArray *paths;
@property (retain, nonatomic) NSMutableArray *hitTestPaths;
@property (readonly, nonatomic) BOOL isRoad;
@property (nonatomic) BOOL isPOI;
@property (nonatomic) BOOL isTransitStop;
@property (nonatomic) BOOL isTransitLine;
@property (nonatomic) BOOL isRouteEta;
@property (nonatomic) float strokeWidth;
@property (readonly, weak, nonatomic) NSString *trueLabel;
@property (retain, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) long long mapFeatureType;
@property (nonatomic) int sortKey;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)dealloc;
- (id)initWithAccessibilityContainer:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_updatePath;
- (void)addFeature:(id)a0;
- (id)_accessibilityMapDetailedInfoAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)_accessibilityMapFeatureType;
- (BOOL)_allowCustomActionHintSpeakOverride;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0;
- (id)_accessibilityShortAddress:(id)a0;
- (id)_accessibilityShortAddress:(id)a0 alwaysIncludeLocality:(BOOL)a1;
- (id)_distanceAwayString;
- (id)_distanceStringForPoint:(struct { double x0; double x1; double x2; })a0;
- (void)_mergePaths;
- (void)_updateElementStatus;
- (id)accessibilityPaths;
- (void)addFeatureWrapper:(id)a0;
- (void)addFeaturesFromElement:(id)a0;
- (id)detailedFeatureElementInfoAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithAccessibilityContainer:(id)a0 feature:(id)a1 ignoreMissingName:(BOOL)a2 useLocalizedLabels:(BOOL)a3;
- (id)pointsFromFeatureWrapper:(id)a0;
- (void)removeFeatures;
- (void)startLocationInformationRequest:(struct CGPoint { double x0; double x1; })a0;
- (id)trueLabel;

@end
