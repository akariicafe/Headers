@class LPFileMetadata, NSString, NSItemProvider, _SFPrintController, UIPrintPageRenderer;

@interface _SFPrintActivityItemProvider : _SFActivityItemProvider <UIActivityItemsSource> {
    UIPrintPageRenderer *_printPageRenderer;
    NSItemProvider *_pdfItemProvider;
    LPFileMetadata *_linkPreviewFileMetadata;
}

@property (readonly, nonatomic) _SFPrintController *printController;
@property (readonly, nonatomic) BOOL hasReservedPrintInteractionController;
@property (nonatomic) BOOL canVendPDFRepresentation;
@property (readonly, nonatomic) NSItemProvider *pdfItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)item;
- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)activityViewController:(id)a0 itemsForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItems:(id)a0;
- (id)initWithPrintController:(id)a0 webView:(id)a1;

@end
