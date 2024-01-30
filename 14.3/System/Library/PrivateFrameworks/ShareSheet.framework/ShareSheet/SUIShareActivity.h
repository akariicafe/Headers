@interface SUIShareActivity : UIActivity

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (BOOL)ss_shouldExecuteInShareSheet;
- (id)activityTitle;
- (long long)_defaultSortGroup;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (BOOL)ss_shouldDismissHostsPresentationBeforePerforming;

@end
