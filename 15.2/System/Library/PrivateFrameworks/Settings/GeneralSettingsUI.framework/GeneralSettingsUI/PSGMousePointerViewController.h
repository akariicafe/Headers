@interface PSGMousePointerViewController : PSListController

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (void)dealloc;
- (void)pointerDevicesDidChange;
- (void)setTrackingSpeed:(id)a0 specifier:(id)a1;
- (id)trackingSpeed:(id)a0;
- (void)setNaturalScrolling:(id)a0 specifier:(id)a1;
- (id)naturalScrolling:(id)a0;
- (void)setTapToClick:(id)a0 specifier:(id)a1;
- (id)tapToClick:(id)a0;
- (void)setTwoFingerSecondaryClick:(id)a0 specifier:(id)a1;
- (id)twoFingerSecondaryClick:(id)a0;
- (void)setSecondaryClick:(id)a0 specifier:(id)a1;
- (id)secondaryClick:(id)a0;

@end
