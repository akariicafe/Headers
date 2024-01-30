@class _SFFindOnPageView;

@interface _SFFindOnPageUIActivity : _SFActivity {
    _SFFindOnPageView *_findOnPageView;
}

- (id)activityType;
- (void).cxx_destruct;
- (void)activityDidFinish:(BOOL)a0;
- (id)initWithFindOnPageView:(id)a0;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
