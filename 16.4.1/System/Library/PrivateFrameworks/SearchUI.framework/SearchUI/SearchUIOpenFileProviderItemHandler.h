@class NSURL;

@interface SearchUIOpenFileProviderItemHandler : SearchUICommandHandler <QLPreviewControllerDataSource>

@property (retain) NSURL *fileProviderURL;

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (void).cxx_destruct;
- (BOOL)supportsShare;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (void)fetchFileProviderURLWithCompletionHandler:(id /* block */)a0;
- (void)fetchShareableURLWithCompletionHandler:(id /* block */)a0;
- (id)itemProviderForCopy;
- (BOOL)openFileURLInPlaceInDefaultApplicationIfPossible:(id)a0;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (BOOL)supportsCopy;

@end
