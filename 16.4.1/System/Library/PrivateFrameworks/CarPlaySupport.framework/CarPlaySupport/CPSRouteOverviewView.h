@class CPSRouteEstimatesView, NSString, CPTravelEstimates, UILabel, CPTrip, CPSHidingLabel;

@interface CPSRouteOverviewView : UIView

@property (readonly, nonatomic) CPTrip *representedTrip;
@property (readonly, nonatomic) UILabel *destinationName;
@property (readonly, nonatomic) CPSHidingLabel *destinationAddress;
@property (readonly, nonatomic) CPSHidingLabel *routeNoteLabel;
@property (copy, nonatomic) NSString *routeNote;
@property (retain, nonatomic) CPTravelEstimates *currentTravelEstimates;
@property (readonly, nonatomic) CPSRouteEstimatesView *estimatesView;

+ (id)_multilineLabel;
+ (void)_applyBoldText:(id)a0 fontSize:(double)a1 color:(id)a2 toLabel:(id)a3;
+ (void)_applyText:(id)a0 fontSize:(double)a1 color:(id)a2 toLabel:(id)a3;
+ (id)_nameForMapItem:(id)a0;
+ (id)_shortenedAddressForAddress:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateTripEstimateStyle;
- (void)setRepresentedTrip:(id)a0;

@end
