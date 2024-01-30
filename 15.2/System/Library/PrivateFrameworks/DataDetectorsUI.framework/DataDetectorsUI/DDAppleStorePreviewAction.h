@interface DDAppleStorePreviewAction : DDPreviewAction

+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)urlForURL:(id)a0 result:(struct __DDResult { } *)a1;

- (id)menuActions;
- (id)createViewController;
- (id)commitURL;
- (BOOL)showMenuTitle;
- (id)previewActionsWithValidatedURL:(id)a0;

@end
