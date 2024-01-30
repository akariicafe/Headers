@class NSString;

@interface NUArticleTextActivityItemSource : NUArticleActivityItemSource

@property (readonly, nonatomic) NSString *itemTitle;

- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithHeadline:(id)a0;

@end
