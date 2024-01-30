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

- (unsigned long long)verticalAlignment;
- (void)setVerticalAlignment:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (unsigned long long)_advancePresentationStateFromPresenting;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_fadeOutStatusLabel:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_advancePresentationState;
- (void)enqueueStatusUpdate:(id)a0 forIdentifier:(id)a1;
- (void)_fadeInStatusLabel:(id)a0;
- (unsigned long long)_advancePresentationStateFromFadeIn;
- (void)viewDidLoad;
- (void)_resetPresentationStateAnimated:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_notifyDelegateDidFinishStatusUpdates;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)_advancePresentationStateFromReady;
- (void)_notifyDelegateWillBeginStatusUpdates;
- (unsigned long long)_advancePresentationStateFromFadeOut;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;

@end
