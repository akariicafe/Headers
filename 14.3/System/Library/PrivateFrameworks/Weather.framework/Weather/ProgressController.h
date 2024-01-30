@class NSTimer;

@interface ProgressController : NSObject {
    BOOL _progressShowing;
    int _loadingCount;
    NSTimer *_hideSpinnerTimer;
}

+ (id)sharedProgressController;

- (void)_hideSpinner;
- (void).cxx_destruct;
- (void)_setHideSpinnerTimer:(id)a0;
- (void)_showSpinner;
- (void)setLoadingData:(BOOL)a0;
- (void)suspend;
- (void)userScrolled;

@end
