@class TabDocument;

@interface ActionPanelActivityItemProvider : _SFLinkWithPreviewActivityItemProvider

@property (readonly, weak, nonatomic) TabDocument *tabDocument;

- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)initWithPlaceholderItem:(id)a0 URL:(id)a1 pageTitle:(id)a2 webView:(id)a3;
- (id)initWithTabDocument:(id)a0;
- (id)initWithPlaceholderItem:(id)a0 tabDocument:(id)a1;

@end
