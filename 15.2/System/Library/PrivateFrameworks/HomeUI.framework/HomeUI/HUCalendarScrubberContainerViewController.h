@class NSDate, UIView, NSString, UIButton, HFCameraPlaybackEngine, NSLayoutConstraint, HUCalendarScrubberViewController, AVBackgroundView;

@interface HUCalendarScrubberContainerViewController : UIViewController <HUCalendarScrubberViewDelegate, HFCameraPlaybackEngineObserver>

@property (retain, nonatomic) HUCalendarScrubberViewController *calendarScrubber;
@property (retain, nonatomic) UIButton *prevWeekButton;
@property (retain, nonatomic) UIButton *nextWeekButton;
@property (retain, nonatomic) AVBackgroundView *backgroundView;
@property (retain, nonatomic) UIView *hairlineViewLeft;
@property (retain, nonatomic) UIView *hairlineViewRight;
@property (retain, nonatomic) NSLayoutConstraint *backgroundWidthConstraint;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) NSDate *lastSelectedDate;
@property (nonatomic) BOOL isEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithPlaybackEngine:(id)a0;
- (void)playbackEngine:(id)a0 didUpdatePlaybackPosition:(id)a1;
- (void)playbackEngine:(id)a0 didUpdateEvents:(id)a1;
- (void)playbackEngine:(id)a0 didRemoveEvents:(id)a1;
- (void)scrubberViewController:(id)a0 didSelectItemAtIndex:(id)a1;
- (void)scrubberViewController:(id)a0 didMoveToSection:(unsigned long long)a1;
- (void)handlePreviousButton:(id)a0;
- (void)handleNextButton:(id)a0;
- (void)_updateNextPreviousButtonState;
- (void)_jumpToDate:(id)a0 animated:(BOOL)a1;

@end
