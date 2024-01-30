@class NSTimer, MTTimerManager, NSDate;
@protocol CSTimerViewControllerDelegate;

@interface CSTimerViewController : CSCoverSheetViewControllerBase {
    NSTimer *_updateTimer;
    NSDate *_endDate;
    MTTimerManager *_timerManager;
}

@property (weak, nonatomic) id<CSTimerViewControllerDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)_startTimer;
- (void)_updateTimerFired;
- (void)_stopTimer;
- (void)setEndDate:(id)a0;
- (void)_nextTimerChanged:(id)a0;
- (void)_stopTimerNotifyingDelegate:(BOOL)a0;
- (void)_updateNextTimer;
- (void)loadView;
- (BOOL)isTimerActive;
- (void).cxx_destruct;
- (id)timerView;
- (void)_updateTimerLabelView;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)isEndDateValid;

@end
