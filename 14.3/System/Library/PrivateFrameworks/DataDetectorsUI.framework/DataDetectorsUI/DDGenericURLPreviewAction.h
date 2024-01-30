@interface DDGenericURLPreviewAction : DDPreviewAction

+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)previewActionsWithURL:(id)a0 validatedURL:(id)a1 result:(struct __DDResult { } *)a2 context:(id)a3;

- (id)commitURL;
- (id)menuActions;

@end
