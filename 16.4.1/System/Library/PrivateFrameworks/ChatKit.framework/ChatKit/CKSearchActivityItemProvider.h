@class LPLinkMetadata;

@interface CKSearchActivityItemProvider : UIActivityItemProvider

@property (retain, nonatomic) id payload;
@property (retain, nonatomic) LPLinkMetadata *metadata;

- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithPlaceholderItem:(id)a0 metadata:(id)a1;

@end
