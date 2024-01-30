@interface DDPreviewAction : DDAction

+ (id)previewActionForURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;

- (id)previewViewController;
- (id)menuActions;
- (id)viewController;
- (void)dealloc;
- (BOOL)prefersActionMenuStyle;
- (void)setPreviewMode:(BOOL)a0;
- (id)createViewController;
- (id)commitURL;
- (BOOL)wantsSeamlessCommit;
- (id)menuActionClasses;
- (BOOL)wantsCustomViewControllerCommit;
- (id)expandViewController;
- (BOOL)requiresEmbeddingNavigationController;
- (id)platterTitle;
- (id)platterSubtitle;
- (BOOL)showMenuTitle;
- (struct CGSize { double x0; double x1; })suggestedContentSize;
- (id)menuHeaderView;

@end
