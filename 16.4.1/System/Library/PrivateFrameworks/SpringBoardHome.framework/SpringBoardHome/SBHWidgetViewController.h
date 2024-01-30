@class NSMutableArray;
@protocol SBHWidgetViewControllerDelegate;

@interface SBHWidgetViewController : CHUISWidgetHostViewController {
    NSMutableArray *_preventBackgroundingAssertions;
    BOOL _isInvalidatingBackgroundAssertion;
    BOOL _pendingStaticMode;
    BOOL _isInvalidated;
}

@property (weak, nonatomic) id<SBHWidgetViewControllerDelegate> delegate;

- (void)setPresentationMode:(unsigned long long)a0;
- (id)acquirePreventSceneBackgroundingAssertionForReason:(id)a0;
- (void)_invalidateBackgroundingAssertion:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
