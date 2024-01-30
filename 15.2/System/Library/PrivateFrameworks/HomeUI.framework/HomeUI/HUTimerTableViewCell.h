@class UIStackView, MTTimer, UILayoutGuide, HUTimerCancelButtonView, UILabel, HUTimerCountdownView, COTimerManager;

@interface HUTimerTableViewCell : UITableViewCell <HUTimerCancelDelegate, HUTimerCountdownDelegate>

@property (retain, nonatomic) MTTimer *timer;
@property (retain, nonatomic) COTimerManager *timerManager;
@property (retain, nonatomic) UILabel *timerNameLabel;
@property (retain, nonatomic) UILabel *timerTimeLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILayoutGuide *buttonGuide;
@property (retain, nonatomic) HUTimerCountdownView *timerCountdownView;
@property (retain, nonatomic) HUTimerCancelButtonView *cancelButtonView;
@property (nonatomic) double previousRemainingTime;

+ (id)_stringForDuration:(double)a0;

- (void)_createConstraints;
- (void)layoutSubviews;
- (void)_createSubviews;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)cancelTimer;
- (id)_alarmBackgroundColor;
- (id)initWithTimer:(id)a0 manager:(id)a1;
- (void)updateTimerInfo;
- (void)toggleTimer;
- (id)initWithMobileTimerObject:(id)a0 manager:(id)a1;

@end
