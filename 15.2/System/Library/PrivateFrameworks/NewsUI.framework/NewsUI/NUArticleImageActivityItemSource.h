@class UIImage;

@interface NUArticleImageActivityItemSource : NUArticleActivityItemSource

@property (readonly, nonatomic) UIImage *articleImage;

- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithHeadline:(id)a0;

@end
