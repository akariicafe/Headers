@class NSDateComponentsFormatter, MTCCTimer, CADisplayLink, NSString, UILabel, UIView, MTCCRoundButton;
@protocol MTCCTimerBackgroundViewControllerDelegate;

@interface MTCCTimerBackgroundViewController : UIViewController <_UICursorInteractionDelegate>

@property (retain, nonatomic) MTCCRoundButton *button;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSDateComponentsFormatter *dateComponentsFormatter;
@property (weak, nonatomic) id<MTCCTimerBackgroundViewControllerDelegate> delegate;
@property (copy, nonatomic) MTCCTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_updateLabels;
- (void)displayLinkTick:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)handleContentSizeChange:(id)a0;
- (void)_reloadForCurrentState;
- (void)buttonTapped:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1;
- (void)dealloc;
- (id)cursorInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;

@end
