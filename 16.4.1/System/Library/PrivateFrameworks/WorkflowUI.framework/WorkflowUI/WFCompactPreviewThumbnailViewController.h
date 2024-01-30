@class WFContentItem, UIView;

@interface WFCompactPreviewThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) WFContentItem *contentItem;
@property (weak, nonatomic) UIView *hostedView;

- (unsigned long long)preferredContentMode;
- (id)initWithContentItem:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (double)contentHeightForWidth:(double)a0;

@end
