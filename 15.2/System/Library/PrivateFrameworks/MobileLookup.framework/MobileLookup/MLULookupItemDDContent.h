@class DDPreviewAction;

@interface MLULookupItemDDContent : MLULookupItemContent {
    DDPreviewAction *_previewAction;
}

- (id)contact;
- (unsigned long long)commitType;
- (void)dismissViewController;
- (void).cxx_destruct;
- (id)commitURL;
- (id)initWithURL:(id)a0 result:(struct __DDResult { } *)a1 documentProperties:(id)a2;
- (void)setupViewControllerInCommitMode;

@end
