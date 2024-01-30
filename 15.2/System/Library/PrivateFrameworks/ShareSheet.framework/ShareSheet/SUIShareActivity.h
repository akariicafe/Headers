@interface SUIShareActivity : UIActivity

+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (id)activityType;
- (long long)_defaultSortGroup;
- (BOOL)ss_shouldExecuteInShareSheet;
- (BOOL)ss_shouldDismissHostsPresentationBeforePerforming;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
