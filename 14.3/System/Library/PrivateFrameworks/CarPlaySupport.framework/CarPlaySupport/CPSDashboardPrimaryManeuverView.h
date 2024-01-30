@interface CPSDashboardPrimaryManeuverView : CPSPrimaryManeuverView

+ (id)instructionsForManeuver:(id)a0;
+ (id)symbolImageForManeuver:(id)a0;
+ (id)junctionImageForManeuver:(id)a0;

- (BOOL)centersManeuverInView;
- (double)symbolImageHeight;
- (BOOL)hasJunctionImageBackground;
- (id)junctionBackgroundColor;
- (BOOL)fitJunctionViewToHeight;

@end
