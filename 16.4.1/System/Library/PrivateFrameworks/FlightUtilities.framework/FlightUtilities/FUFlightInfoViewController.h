@class FUFlightInfoView;

@interface FUFlightInfoViewController : UIViewController {
    FUFlightInfoView *_flight;
    unsigned long long _style;
}

- (BOOL)_canShowWhileLocked;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setStyle:(unsigned long long)a0;
- (void)loadView;
- (id)flightInfoView;

@end
