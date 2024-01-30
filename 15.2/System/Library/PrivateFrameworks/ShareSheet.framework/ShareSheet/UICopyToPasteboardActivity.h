@interface UICopyToPasteboardActivity : UIActivity

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (long long)_defaultSortGroup;
- (void)prepareWithActivityItems:(id)a0;
- (id)pasteboard;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
