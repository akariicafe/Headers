@class NSString, NSTimer, NSDate, MTTimerManager;
@protocol CSTimerViewControllerDelegate;

@interface CSTimerViewController : CSCoverSheetViewControllerBase {
    NSTimer *_updateTimer;
    NSDate *_endDate;
    MTTimerManager *_timerManager;
}

@property (weak, nonatomic) id<CSTimerViewControllerDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSString *timerText;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateNextTimer;
- (void)_updateTimerFired;
- (void)setEndDate:(id)a0;
- (void)_updateTimerLabelView;
- (BOOL)isEndDateValid;
- (void)dealloc;
- (void)_startTimer;
- (void)_stopTimerNotifyingDelegate:(BOOL)a0;
- (BOOL)isTimerActive;
- (void)_nextTimerChanged:(id)a0;
- (void)_stopTimer;
- (void).cxx_destruct;
- (void)loadView;
- (id)timerView;

@end
