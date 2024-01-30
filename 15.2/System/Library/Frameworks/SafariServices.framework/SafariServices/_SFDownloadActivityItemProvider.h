@class NSString, _SFQuickLookDocument;

@interface _SFDownloadActivityItemProvider : _SFActivityItemProvider <UIActivityItemApplicationExtensionSource>

@property (retain, nonatomic) _SFQuickLookDocument *quickLookDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityViewControllerApplicationExtensionItem:(id)a0;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)item;
- (id)pageTitle;
- (id)initWithQuickLookDocument:(id)a0 URL:(id)a1 webView:(id)a2;

@end
