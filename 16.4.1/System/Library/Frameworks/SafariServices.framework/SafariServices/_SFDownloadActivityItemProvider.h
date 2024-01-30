@class NSString, SFQuickLookDocument;

@interface _SFDownloadActivityItemProvider : _SFActivityItemProvider <UIActivityItemApplicationExtensionSource>

@property (retain, nonatomic) SFQuickLookDocument *quickLookDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewControllerApplicationExtensionItem:(id)a0;
- (id)initWithQuickLookDocument:(id)a0 URL:(id)a1 webView:(id)a2;
- (id)pageTitle;

@end
