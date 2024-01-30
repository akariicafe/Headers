@class NSArray, NSMutableArray, UIView;

@interface NTKSiderealWaypointsView : UIView {
    NSArray *_waypoints;
    double _orbitDiameter;
    UIView *_orbitContainerView;
    double _waypointDiameter;
    UIView *_waypointContainerView;
    double _dialDiameter;
    UIView *_separatorLinesContainer;
    NSMutableArray *_separatorLines;
}

- (void).cxx_destruct;
- (void)setWaypoints:(id)a0;
- (id)_newWaypointView;
- (void)_updateSeparatorLines;
- (id)_newSeparatorLineForWaypoint:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orbitDiameter:(double)a1 dialDiameter:(double)a2 waypoints:(id)a3;

@end
