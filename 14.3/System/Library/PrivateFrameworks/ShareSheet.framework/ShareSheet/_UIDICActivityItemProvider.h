@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider : UIActivityItemProvider

@property (readonly, weak, nonatomic) UIDocumentInteractionController *documentInteractionController;

- (id)initWithPlaceholderItem:(id)a0 documentInteractionController:(id)a1;
- (id)item;
- (void).cxx_destruct;
- (id)loadedURL;
- (void)main;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (BOOL)_shouldExecuteItemOperationForActivity:(id)a0;
- (id)activityViewController:(id)a0 openURLAnnotationForActivityType:(id)a1;

@end
