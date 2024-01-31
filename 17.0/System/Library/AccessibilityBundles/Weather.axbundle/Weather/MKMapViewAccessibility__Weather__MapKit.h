@interface MKMapViewAccessibility__Weather__MapKit : __MKMapViewAccessibility__Weather__MapKit_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (Class)_axMKAttributionLabelClass;
+ (Class)_axVKFeatureAccessibilityElementClass;

- (void)setAccessibilityLabel:(id)a0;
- (void)setDelegate:(id)a0;
- (id)accessibilityCustomRotors;
- (void)addOverlay:(id)a0 level:(long long)a1;
- (void)mapLayerDidFinishLoadingTiles:(id)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axDidToggleAXSetting:(id)a0;
- (void)_axUpdateElementsComplete:(id)a0;
- (BOOL)_axApplyModel:(id)a0 ifElement:(id)a1 hasLocation:(id)a2;
- (void)_axApplyModelToVKFeatureAccessibilityElement:(id)a0;
- (void)_axApplyModelsToVKFeatureAccessibilityElementsIfNeeded;
- (id)_axAttributionElement;
- (id)_axCacheKeyForLocation:(id)a0;
- (void)_axClearInFlightRequests;
- (id)_axCurrentOverlayKey;
- (id)_axFavoritesRotor;
- (id)_axGetCurrentOverlayKeyFromDelegate;
- (id)_axInFlightRequestCleanupTimer;
- (id)_axInFlightRequests;
- (void)_axInitialize;
- (BOOL)_axIsInitialized;
- (BOOL)_axLocationCoordinatesMatch:(id)a0 location:(id)a1;
- (id)_axLocationForVKFeatureAccessibilityElement:(id)a0;
- (id)_axLocationFromVKLocationCoordinates:(struct VKLocationCoordinate2D { double x0; double x1; })a0;
- (id)_axMapLayer;
- (id)_axModelCache;
- (id)_axModelForLocation:(id)a0;
- (BOOL)_axRequestIsInFlightForLocation:(id)a0;
- (void)_axScheduleUpdate;
- (void)_axSetAccessibilityModel:(id)a0 forElementWithLocation:(id)a1;
- (void)_axSetCurrentOverlayKey:(id)a0;
- (void)_axSetFavoritesRotor:(id)a0;
- (void)_axSetInFlightRequestCleanupTimer:(id)a0;
- (void)_axSetInFlightRequests:(id)a0;
- (void)_axSetIsInitialized:(BOOL)a0;
- (void)_axSetModelCache:(id)a0;
- (void)_axSetRequestIsInFlight:(BOOL)a0 forLocation:(id)a1;
- (void)_axSetUpdateDebounceTimer:(id)a0;
- (void)_axStoreModel:(id)a0 location:(id)a1;
- (id)_axUpdateDebounceTimer;
- (void)_axUpdateLocation:(id)a0 withModel:(id)a1;
- (void)_axUpdateModelsForCurrentOverlayKind;
- (id)_axVKFeaturePOIElements;

@end
