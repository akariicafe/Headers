@class NSURL;

@interface DDMapAction : DDRemoteAction {
    NSURL *_commitURL;
}

+ (BOOL)actionAvailableForContact:(id)a0;
+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)viewControllerProviderClass;

- (void).cxx_destruct;
- (id)previewActions;
- (id)commitURL;
- (id)initWithURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (id)menuActionClasses;

@end
