@class NSURL;

@interface NUArticleURLActivityItemSource : NUArticleActivityItemSource

@property (readonly, nonatomic) NSURL *articleURL;

- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)bodyStringForMailMessage;
- (id)initWithHeadline:(id)a0 URLModifier:(id)a1;

@end
