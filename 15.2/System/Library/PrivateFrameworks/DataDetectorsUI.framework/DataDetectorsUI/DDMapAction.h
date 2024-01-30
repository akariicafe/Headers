@interface DDMapAction : DDRemoteAction

+ (BOOL)actionAvailableForContact:(id)a0;
+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)viewControllerProviderClass;

- (id)previewActions;
- (id)commitURL;
- (id)initWithURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (id)menuActionClasses;

@end
