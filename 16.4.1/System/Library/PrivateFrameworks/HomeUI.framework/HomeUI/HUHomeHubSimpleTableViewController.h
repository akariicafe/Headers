@class NSString;

@interface HUHomeHubSimpleTableViewController : HUItemTableViewController

@property (nonatomic) NSString *descriptionStringWithFormatKey;

- (void)loadView;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1 descriptionStringWithFormatKey:(id)a2;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;

@end
