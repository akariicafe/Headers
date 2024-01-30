@interface ToggleReaderActivity : TabDocumentActivity

- (id)activityType;
- (long long)actionType;
- (BOOL)_isEnabled;
- (BOOL)_isDisabled;
- (id)activityTitle;
- (id)_systemImageName;
- (void)performActivityWithTabDocument:(id)a0;

@end
