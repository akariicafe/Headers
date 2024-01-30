@interface MPAVRoutingTableViewCellAccessibility : __MPAVRoutingTableViewCellAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)updateForEndpoint:(id)a0 routeItem:(id)a1 inferLocalizedModelName:(BOOL)a2;
- (BOOL)_axIsUsingSmartAudioCheckmarkStyle;
- (id)accessibilityMediaRoute;
- (id)_accessibilityDescriptionForRoute:(id)a0;
- (void)setAccessibilityMediaRoute:(id)a0;
- (BOOL)_axIsVolumeSliderVisible;

@end
