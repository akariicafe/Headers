@interface CPSDashboardPrimaryManeuverView : CPSPrimaryManeuverView

+ (id)instructionsForManeuver:(id)a0;
+ (id)junctionImageForManeuver:(id)a0;
+ (id)symbolImageForManeuver:(id)a0;

- (BOOL)centersManeuverInView;
- (BOOL)fitJunctionViewToHeight;
- (BOOL)hasJunctionImageBackground;
- (id)junctionBackgroundColor;
- (double)symbolImageHeight;

@end
