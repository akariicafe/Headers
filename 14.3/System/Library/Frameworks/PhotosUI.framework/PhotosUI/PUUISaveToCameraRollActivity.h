@interface PUUISaveToCameraRollActivity : UISaveToCameraRollActivity

- (id)activityType;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_containsVideoComplementsInActivityItems:(id)a0 outVideoComplements:(id *)a1;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
