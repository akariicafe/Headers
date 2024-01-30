@class NSArray, HKGraphSeries;

@interface _HKGraphViewSelectionContext : NSObject

@property (nonatomic) long long selectionState;
@property (readonly, nonatomic) double minimumSelectionDistance;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } seriesSelectionRect;
@property (retain, nonatomic) NSArray *touchPoints;
@property (retain, nonatomic) NSArray *selectionAreaMapping;
@property (retain, nonatomic) NSArray *selectedRangeBoundariesXValue;
@property (retain, nonatomic) HKGraphSeries *closestSeriesToSelection;

- (void).cxx_destruct;

@end
