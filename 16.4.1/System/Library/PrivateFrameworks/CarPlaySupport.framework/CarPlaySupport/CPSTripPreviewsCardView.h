@class NSString, CPTripPreviewTextConfiguration, CPSCardPlatterView, CPRouteChoice, NSArray, CPTrip, UIButton;
@protocol CPSTripInitiating;

@interface CPSTripPreviewsCardView : UIView <CPSLinearFocusProviding>

@property (retain, nonatomic) CPTripPreviewTextConfiguration *textConfiguration;
@property (weak, nonatomic) CPTrip *selectedTrip;
@property (weak, nonatomic) CPRouteChoice *selectedRouteChoice;
@property (readonly, nonatomic) CPSCardPlatterView *platterView;
@property (readonly, weak, nonatomic) id<CPSTripInitiating> tripDelegate;
@property (readonly, nonatomic) UIButton *goButton;
@property (readonly, copy, nonatomic) NSArray *trips;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)_updateButtonColors;
- (id)initWithTripDelegate:(id)a0 trips:(id)a1 textConfiguration:(id)a2;
- (void)notifyDidSelectRouteChoice:(id)a0;
- (id)setupGoButton;
- (void)startTripButtonPressed:(id)a0;
- (void)updateEstimates:(id)a0 forTripIdentifier:(id)a1;

@end
