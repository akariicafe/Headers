@class NSNumber, NSIndexSet, NSMutableArray, CLKDevice;

@interface NTKDialView : UIView

@property (nonatomic) unsigned long long numberOfMarkers;
@property (copy, nonatomic) id /* block */ markersFactory;
@property (copy, nonatomic) id /* block */ angleProvider;
@property (nonatomic) double diameter;
@property (retain, nonatomic) NSMutableArray *markers;
@property (retain, nonatomic) CLKDevice *device;
@property (nonatomic) BOOL needsLayoutMarkers;
@property (nonatomic) double contentInset;
@property (nonatomic) double contentDiameter;
@property (nonatomic) double angleOffset;
@property (nonatomic) BOOL shouldRotateMarkers;
@property (retain, nonatomic) NSIndexSet *markersToRotateIndexSet;
@property (nonatomic) BOOL shouldPixelAlignCenterPoints;
@property (retain, nonatomic) NSNumber *hidingMaskStartAngle;
@property (retain, nonatomic) NSNumber *hidingMaskEndAngle;
@property (nonatomic) BOOL disableLayout;
@property (copy, nonatomic) id /* block */ markerRotationProvider;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithNumberOfMarkers:(unsigned long long)a0 markersFactory:(id /* block */)a1 angleProvider:(id /* block */)a2;
- (void)layoutMarkers;
- (void)enumerateMarkers:(id /* block */)a0;
- (double)totalDiameter;
- (unsigned long long)searchForClosestIndexAtAngle:(double)a0;
- (double)angleForIndex:(double)a0;
- (id)markerAtIndex:(unsigned long long)a0;
- (void)_layoutCurvedLabel:(id)a0 rotationAngle:(double)a1;
- (struct CGPoint { double x0; double x1; })centerPointForAngle:(double)a0 radius:(long long)a1;
- (void)updateMarkersVisibility;
- (BOOL)shouldHideMarkerAtIndex:(long long)a0;
- (id)initWithNumberOfMarkers:(unsigned long long)a0 markersFactory:(id /* block */)a1;
- (void)replaceMarker:(id)a0 atIndex:(long long)a1;
- (void)reloadMarkers;
- (double)searchForClosestMarkerAngleAtAngle:(double)a0;
- (struct CGPoint { double x0; double x1; })positionForMarkerAtIndex:(unsigned long long)a0;

@end
