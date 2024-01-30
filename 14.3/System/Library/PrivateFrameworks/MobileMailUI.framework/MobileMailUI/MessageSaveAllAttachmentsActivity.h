@interface MessageSaveAllAttachmentsActivity : MessageSaveToCameraRollActivity

- (id)activityType;
- (id)_beforeActivity;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
