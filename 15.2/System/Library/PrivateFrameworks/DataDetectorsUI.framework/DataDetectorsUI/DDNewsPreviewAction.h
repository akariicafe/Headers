@interface DDNewsPreviewAction : DDPreviewAction

+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)urlForURL:(id)a0 result:(struct __DDResult { } *)a1;

- (id)menuActions;
- (id)createViewController;
- (id)commitURL;
- (BOOL)requiresEmbeddingNavigationController;

@end
