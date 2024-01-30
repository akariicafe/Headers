@interface UIAddToReadingListActivity : UIActivity

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;
- (void)_addToReadingList:(id)a0 withTitle:(id)a1;

@end
