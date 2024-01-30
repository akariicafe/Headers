@class NSString, QLPreviewPrinter, QLItem;

@interface QLActivityItemProvider : NSObject <UIActivityItemSource>

@property (retain) QLPreviewPrinter *printer;
@property (retain) QLItem *activityPreviewItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)printInfo;
- (id)activityViewControllerPlaceholderItems:(id)a0;
- (id)mainItem;
- (id)_pdfPreviewDataAtURL:(id)a0;

@end
