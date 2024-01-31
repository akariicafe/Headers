@interface MPAVRoutingTableViewCellAccessibility : __MPAVRoutingTableViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)updateForEndpoint:(id)a0 routeItem:(id)a1 inferLocalizedModelName:(BOOL)a2;
- (id)_accessibilityDescriptionForRoute:(id)a0;
- (BOOL)_axIsUsingSmartAudioCheckmarkStyle;
- (BOOL)_axIsVolumeSliderVisible;
- (id)accessibilityMediaRoute;
- (void)setAccessibilityMediaRoute:(id)a0;

@end
