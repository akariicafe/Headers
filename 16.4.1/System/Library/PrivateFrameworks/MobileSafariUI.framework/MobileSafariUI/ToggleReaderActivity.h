@interface ToggleReaderActivity : TabDocumentActivity

- (BOOL)_isEnabled;
- (id)activityTitle;
- (id)activityType;
- (long long)actionType;
- (id)_systemImageName;
- (BOOL)_isDisabled;
- (void)performActivityWithTabDocument:(id)a0;

@end
