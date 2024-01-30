@class NSString;
@protocol _SFMailContentProviderDataSource;

@interface _SFMailContentProvider : NSObject <MFMailComposeViewControllerDelegate>

@property (weak, nonatomic) id<_SFMailContentProviderDataSource> dataSource;
@property (nonatomic) BOOL restrictAddingPDFContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (long long)_bestContentTypeForPreferredContentType:(long long)a0;
- (BOOL)_canProvideContentType:(long long)a0;
- (long long)_defaultPreferredContentType;
- (void)_getPDFDataWithCompletionHandler:(id /* block */)a0;
- (void)_getReaderContentWithCompletionHandler:(id /* block */)a0;
- (void)_getWebArchiveDataWithCompletion:(id /* block */)a0;
- (id)_preferentiallyOrderedAvailableContentTypes;
- (id)_preferentiallyOrderedContentTypes;
- (void)getMailComposeViewControllerWithMailToURL:(id)a0 contentURL:(id)a1 preferredContentType:(long long)a2 completionHandler:(id /* block */)a3;
- (void)prepareMailComposeViewController:(id)a0 withMailToURL:(id)a1 contentURL:(id)a2 preferredContentType:(long long)a3 completionHandler:(id /* block */)a4;

@end
