@class FUFlightLeg, FUFlight, FUSeparator, FUStyleProvider, FULabel, NSLayoutConstraint, UIButton;
@protocol FUFlightInfoViewProtocol;

@interface FUFlightInfoView : UIView {
    unsigned long long _displayedLegId;
    FUStyleProvider *_styleProvider;
    BOOL _awake;
    BOOL _multiFlights;
}

@property (weak) UIButton *flightButton;
@property (readonly, nonatomic) FUFlight *flight;
@property (readonly, nonatomic) FUFlightLeg *leg;
@property (weak) id<FUFlightInfoViewProtocol> delegate;
@property long long currentFocus;
@property (weak) FULabel *labelAirlineName;
@property (weak) FULabel *labelFlightCode;
@property (weak) FULabel *labelStatusTitle;
@property (weak) FULabel *labelStatus;
@property (weak) FULabel *labelDepartureCity;
@property (weak) FULabel *labelDepartureCode;
@property (weak) FULabel *labelDepartureInfo1;
@property (weak) FULabel *labelDepartureInfo2;
@property (weak) FULabel *labelArrivalCity;
@property (weak) FULabel *labelArrivalCode;
@property (weak) FULabel *labelArrivalInfo1;
@property (weak) FULabel *labelArrivalInfo2;
@property (weak) FULabel *labelDepartureTitle;
@property (weak) FULabel *labelDepartureDate;
@property (weak) FULabel *labelDepartureTime;
@property (weak) FULabel *labelDepartureDelay;
@property (weak) FULabel *labelArrivalTitle;
@property (weak) FULabel *labelArrivalDate;
@property (weak) FULabel *labelArrivalTime;
@property (weak) FULabel *labelArrivalDelay;
@property (weak) FULabel *labelDurationTitle;
@property (weak) FULabel *labelDurationValue;
@property (weak) FULabel *labelDurationComplete;
@property (weak) FULabel *labelBaggageClaimTitle;
@property (weak) FULabel *labelBaggageClaimValue;
@property (weak) FUSeparator *sep5;
@property (retain, nonatomic) NSLayoutConstraint *leadingInset;
@property (retain, nonatomic) NSLayoutConstraint *trailingInset;
@property (retain, nonatomic) NSLayoutConstraint *bottomMargin;
@property (retain, nonatomic) NSLayoutConstraint *departureDelayConstraint;
@property (retain, nonatomic) NSLayoutConstraint *departureTerminalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *departureGateConstraint;
@property (retain, nonatomic) NSLayoutConstraint *arrivalDelayConstraint;
@property (retain, nonatomic) NSLayoutConstraint *arrivalTerminalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *arrivalGateConstraint;
@property (nonatomic) unsigned long long style;

+ (id)flightViewForStyle:(unsigned long long)a0 compact:(BOOL)a1;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void)awakeFromNib;
- (void)didMoveToWindow;
- (void)dealloc;
- (double)standardTableCellContentInset;
- (void).cxx_destruct;
- (void)updateDelayInfo;
- (void)addDateTimeAttributesToString:(id)a0 striked:(BOOL)a1 alignment:(long long)a2;
- (void)flightButtonTapped:(id)a0;
- (id)formattedDurationForDuration:(double)a0;
- (void)setFlight:(id)a0 legIndex:(unsigned long long)a1 multiFlights:(BOOL)a2 spotlightMode:(BOOL)a3;
- (void)setupLabelStylesWithStyle:(unsigned long long)a0;
- (void)updateAirlineInformation;
- (void)updateDateTimeForDeparture:(BOOL)a0;
- (void)updateFlightButtonIcon;
- (void)updateFlightDates;
- (void)updateFlightStatus;
- (void)updateFlightTerminalInfo;
- (void)updateForFollowupContent:(BOOL)a0;
- (void)updateLabelVisibility:(id)a0 constraint:(id)a1;
- (void)updateLocationInfo;
- (void)updateTimeLabel:(id)a0 constraint:(id)a1 withString:(id)a2;

@end
