@class _SFFindOnPageView;

@interface _SFFindOnPageUIActivity : _SFActivity {
    _SFFindOnPageView *_findOnPageView;
}

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_systemImageName;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithFindOnPageView:(id)a0;

@end
