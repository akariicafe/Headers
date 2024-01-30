@class NSTimer;

@interface ProgressController : NSObject {
    BOOL _progressShowing;
    int _loadingCount;
    NSTimer *_hideSpinnerTimer;
}

+ (id)sharedProgressController;

- (void).cxx_destruct;
- (void)suspend;
- (void)_showSpinner;
- (void)_hideSpinner;
- (void)_setHideSpinnerTimer:(id)a0;
- (void)userScrolled;
- (void)setLoadingData:(BOOL)a0;

@end
