@interface DDURLPreviewAction : DDPreviewAction

+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)validatedURLWithURL:(id)a0 result:(struct __DDResult { } *)a1;

- (id)menuActions;
- (void)setPreviewMode:(BOOL)a0;
- (void)safariViewControllerDidFinish:(id)a0;
- (id)createViewController;
- (id)commitURL;
- (BOOL)requiresEmbeddingNavigationController;
- (BOOL)showMenuTitle;

@end
