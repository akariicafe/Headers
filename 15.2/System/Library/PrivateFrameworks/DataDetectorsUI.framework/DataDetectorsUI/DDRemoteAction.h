@interface DDRemoteAction : DDPreviewAction

+ (id)viewControllerProviderClass;

- (id)previewActions;
- (void)setPreviewMode:(BOOL)a0;
- (id)createViewController;

@end
