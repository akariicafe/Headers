@class LPLinkMetadata;

@interface CKSearchActivityItemProvider : UIActivityItemProvider

@property (retain, nonatomic) id payload;
@property (retain, nonatomic) LPLinkMetadata *metadata;

- (id)initWithPlaceholderItem:(id)a0 metadata:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)item;

@end
