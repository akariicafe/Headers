@interface DDURLPreviewAction : DDPreviewAction

+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)validatedURLWithURL:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)previewActionsWithURL:(id)a0 validatedURL:(id)a1 result:(struct __DDResult { } *)a2 context:(id)a3;

- (void)setPreviewMode:(BOOL)a0;
- (void)safariViewControllerDidFinish:(id)a0;
- (id)createViewController;
- (id)commitURL;
- (BOOL)requiresEmbeddingNavigationController;
- (BOOL)showMenuTitle;
- (id)menuActions;

@end
