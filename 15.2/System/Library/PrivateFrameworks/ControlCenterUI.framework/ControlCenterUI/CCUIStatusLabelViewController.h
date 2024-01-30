@class CCUIStatusUpdateQueue, NSArray, NSTimer;
@protocol CCUIStatusLabelViewControllerDelegate;

@interface CCUIStatusLabelViewController : UIViewController {
    CCUIStatusUpdateQueue *_updateQueue;
    NSArray *_statusLabels;
    unsigned long long _currentStatusLabelIndex;
    unsigned long long _presentationState;
    NSTimer *_presentationTimer;
}

@property (weak, nonatomic) id<CCUIStatusLabelViewControllerDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (nonatomic) unsigned long long verticalAlignment;

- (void)setVerticalAlignment:(unsigned long long)a0;
- (unsigned long long)verticalAlignment;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_advancePresentationState;
- (BOOL)_canShowWhileLocked;
- (void)_fadeOutStatusLabel:(id)a0;
- (void)_notifyDelegateDidFinishStatusUpdates;
- (void)_resetPresentationStateAnimated:(BOOL)a0;
- (unsigned long long)_advancePresentationStateFromReady;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)_advancePresentationStateFromPresenting;
- (void).cxx_destruct;
- (void)_fadeInStatusLabel:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (unsigned long long)_advancePresentationStateFromFadeOut;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (unsigned long long)_advancePresentationStateFromFadeIn;
- (void)_notifyDelegateWillBeginStatusUpdates;
- (void)enqueueStatusUpdate:(id)a0 forIdentifier:(id)a1;

@end
