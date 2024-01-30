@class NSArray;

@interface AXUISettingsTouchAccommodationsAllowSwipeGesturesController : AXUISettingsBaseListController

@property (retain, nonatomic) NSArray *minimumDistanceSpecifiers;
@property (nonatomic) BOOL touchAccommodationsAllowsSwipeGesturesToBypass;
@property (nonatomic) double touchAccommodationsSwipeGestureMinimumDistance;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_setAllowsSwipesToBypass:(id)a0 specifier:(id)a1;
- (id)_allowsSwipesToBypass:(id)a0;
- (id)_minimumDistanceSpecifiers;
- (id)_specifierWithName:(id)a0 minimumDistance:(double)a1;
- (BOOL)_shouldShowSwipeMinimumDistanceSpecifier;

@end
