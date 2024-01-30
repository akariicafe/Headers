@class NSTimer, MTTimerManager, NSDate;
@protocol CSTimerViewControllerDelegate;

@interface CSTimerViewController : CSCoverSheetViewControllerBase {
    NSTimer *_updateTimer;
    NSDate *_endDate;
    MTTimerManager *_timerManager;
}

@property (weak, nonatomic) id<CSTimerViewControllerDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)_updateTimerFired;
- (BOOL)isEndDateValid;
- (void).cxx_destruct;
- (id)timerView;
- (void)dealloc;
- (void)loadView;
- (void)_startTimer;
- (void)_nextTimerChanged:(id)a0;
- (void)_stopTimer;
- (void)setEndDate:(id)a0;
- (void)_stopTimerNotifyingDelegate:(BOOL)a0;
- (void)_updateTimerLabelView;
- (void)_updateNextTimer;
- (BOOL)isTimerActive;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
