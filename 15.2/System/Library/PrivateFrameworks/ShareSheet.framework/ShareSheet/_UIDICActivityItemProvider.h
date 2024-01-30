@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider : UIActivityItemProvider

@property (readonly, weak, nonatomic) UIDocumentInteractionController *documentInteractionController;

- (id)activityViewController:(id)a0 openURLAnnotationForActivityType:(id)a1;
- (id)initWithPlaceholderItem:(id)a0 documentInteractionController:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)loadedURL;
- (void)main;
- (void).cxx_destruct;
- (id)item;
- (BOOL)_shouldExecuteItemOperationForActivity:(id)a0;

@end
