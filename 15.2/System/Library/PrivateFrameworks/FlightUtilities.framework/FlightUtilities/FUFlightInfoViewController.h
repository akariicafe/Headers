@class FUFlightInfoView;

@interface FUFlightInfoViewController : UIViewController {
    FUFlightInfoView *_flight;
    unsigned long long _style;
}

- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)setStyle:(unsigned long long)a0;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)flightInfoView;

@end
