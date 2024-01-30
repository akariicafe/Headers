@class NSAttributedString;

@interface RTTUIActivityItemProvider : UIActivityItemProvider

@property (retain, nonatomic) NSAttributedString *transcript;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)activityViewControllerPlaceholderItem:(id)a0;

@end
