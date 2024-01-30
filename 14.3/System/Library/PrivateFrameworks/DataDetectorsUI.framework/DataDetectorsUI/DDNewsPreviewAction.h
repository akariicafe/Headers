@interface DDNewsPreviewAction : DDPreviewAction

+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)previewActionsWithURL:(id)a0 validatedURL:(id)a1 result:(struct __DDResult { } *)a2 context:(id)a3;
+ (id)urlForURL:(id)a0 result:(struct __DDResult { } *)a1;

- (id)createViewController;
- (id)commitURL;
- (BOOL)requiresEmbeddingNavigationController;
- (id)menuActions;

@end
