@class NSAttributedString;

@interface RTTUIActivityItemProvider : UIActivityItemProvider

@property (retain, nonatomic) NSAttributedString *transcript;

- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)a0;

@end
