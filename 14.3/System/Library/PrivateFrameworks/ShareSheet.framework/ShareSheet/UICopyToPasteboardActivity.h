@interface UICopyToPasteboardActivity : UIActivity

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)pasteboard;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (long long)_defaultSortGroup;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
