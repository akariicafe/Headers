@class CPSAlternateRoutesView, NSString;

@interface CPSRoutePreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting>

@property (readonly, nonatomic) CPSAlternateRoutesView *alternatesView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (id)_linearFocusItems;
- (void)alternateRoutesView:(id)a0 didSelectRouteChoice:(id)a1;
- (id)initWithTripDelegate:(id)a0 trips:(id)a1 textConfiguration:(id)a2;
- (void)setSelectedTrip:(id)a0;

@end
