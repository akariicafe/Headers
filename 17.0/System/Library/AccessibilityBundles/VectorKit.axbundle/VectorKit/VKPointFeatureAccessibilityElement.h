@class NSMutableArray;

@interface VKPointFeatureAccessibilityElement : VKFeatureAccessibilityElement

@property (nonatomic) struct { double x; double y; double z; } location;
@property (retain, nonatomic) NSMutableArray *featureIds;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityIdentifier;
- (id)initWithAccessibilityContainer:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isAccessibilityElement;
- (double)_radius;
- (BOOL)accessibilityActivate;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityPath;
- (BOOL)_accessibilitySupportsActivateAction;
- (long long)_accessibilityMapFeatureType;
- (id)_distanceAwayString;
- (id)_poiTypeSuffix;
- (id)accessibilityPaths;
- (id)trueLabel;

@end
