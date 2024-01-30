@class FUFlightInfoView;

@interface FUFlightInfoViewController : UIViewController {
    FUFlightInfoView *_flight;
    unsigned long long _style;
}

- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)setStyle:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (id)flightInfoView;

@end
