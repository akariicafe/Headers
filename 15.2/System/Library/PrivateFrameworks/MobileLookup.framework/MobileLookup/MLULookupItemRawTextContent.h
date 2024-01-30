@interface MLULookupItemRawTextContent : MLULookupItemContent

- (unsigned long long)commitType;
- (id)previewActions;
- (void)dismissViewController;
- (id)initWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setupViewControllerInCommitMode;
- (id)parsecCollectionViewController;

@end
