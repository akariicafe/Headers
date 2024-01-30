@class NSProgress, WFCompactStopButton, WFDialogAttribution;

@interface WFCompactStatusViewController : WFCompactPlatterViewController

@property (readonly, nonatomic) WFCompactStopButton *stopButton;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) WFDialogAttribution *attribution;

- (void).cxx_destruct;
- (void)loadView;
- (void)popCompletedCheckmark;
- (void)transitionToCompleted:(BOOL)a0 animated:(BOOL)a1;

@end
