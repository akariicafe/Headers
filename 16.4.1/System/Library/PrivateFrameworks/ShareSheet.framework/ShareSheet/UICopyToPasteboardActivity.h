@interface UICopyToPasteboardActivity : UIActivity

+ (unsigned long long)_xpcAttributes;

- (id)activityTitle;
- (id)activityType;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)pasteboard;
- (void)prepareWithActivityItems:(id)a0;
- (long long)_defaultSortGroup;

@end
