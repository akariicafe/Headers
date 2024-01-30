@class FUFlightView, NSString, NSArray, NSDate, NSNumber;
@protocol FUFlightViewControllerDelegate;

@interface FUFlightViewController : UIViewController <MKMapViewDelegate, FUFlightViewDelegate> {
    BOOL _loadingFlight;
    NSDate *_startLoadingDate;
    unsigned long long _displayStyle;
    id<FUFlightViewControllerDelegate> _delegate;
    BOOL _requiresDataLoad;
    BOOL _viewLoaded;
}

@property (retain) FUFlightView *regularFlightView;
@property (retain) FUFlightView *previewFlightView;
@property (retain) NSNumber *flightCode;
@property (retain) NSString *airlineCode;
@property (readonly, nonatomic) FUFlightView *flightView;
@property (retain, nonatomic) NSArray *flights;
@property (nonatomic) long long selectedFlight;
@property (nonatomic) long long selectedLeg;
@property (nonatomic) BOOL highlightCurrentFlightLeg;
@property (nonatomic) BOOL showInfoPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithSFFlight:(id)a0 leg:(long long)a1 style:(unsigned long long)a2 delegate:(id)a3;
- (void)setNoBackground;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setDisplayStyle:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)showLoadingView;
- (void)showErrorView;
- (id)initWithFlightCode:(unsigned long long)a0 airlineCode:(id)a1;
- (void)setFlights:(id)a0 selectedFlight:(long long)a1 selectedLeg:(long long)a2;
- (void)loadFlightWithFlightCode:(id)a0 airlineCode:(id)a1 date:(id)a2;
- (void)showFlightView;
- (void)showView:(id)a0;
- (void)addFittingView:(id)a0;
- (void)fadeLayer:(id)a0 visible:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)flightView:(id)a0 didSelectLeg:(long long)a1 ofFlight:(long long)a2;
- (id)initWithFlights:(id)a0;
- (id)initWithSFFlights:(id)a0;
- (void)hideView:(id)a0;

@end
