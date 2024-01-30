@interface UIAddToReadingListActivity : UIActivity

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (void)_addToReadingList:(id)a0 withTitle:(id)a1;
- (void)prepareWithActivityItems:(id)a0;
- (id)_heroActionTitle;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
