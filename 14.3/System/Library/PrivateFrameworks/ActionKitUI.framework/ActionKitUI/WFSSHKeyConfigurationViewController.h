@class WFItemBasedTableSection, WFBasicTableItem, NSString, WFSSHKeyPair, WFTableDataSource;
@protocol WFSSHKeyConfigurationViewControllerDelegate;

@interface WFSSHKeyConfigurationViewController : UITableViewController <WFSSHKeyGenerationViewControllerDelegate>

@property (readonly, nonatomic) WFTableDataSource *dataSource;
@property (readonly, nonatomic) WFItemBasedTableSection *keyInfoSection;
@property (readonly, nonatomic) WFItemBasedTableSection *actionsSection;
@property (readonly, nonatomic) WFBasicTableItem *typeItem;
@property (readonly, nonatomic) WFBasicTableItem *md5HashItem;
@property (readonly, nonatomic) WFBasicTableItem *sha256HashItem;
@property (readonly, nonatomic) WFBasicTableItem *bitsItem;
@property (readonly, nonatomic) WFBasicTableItem *commentItem;
@property (readonly, nonatomic) WFBasicTableItem *exportItem;
@property (readonly, nonatomic) WFBasicTableItem *generateItem;
@property (retain, nonatomic) WFSSHKeyPair *keyPair;
@property (weak, nonatomic) id<WFSSHKeyConfigurationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publicKey;
- (id)init;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)donePressed:(id)a0;
- (void)viewDidLoad;
- (void)keyGenerationViewController:(id)a0 didFinishWithKeyPair:(id)a1;
- (void)updateVisibleItems;
- (id)truncatedHash:(id)a0;
- (id)localizedDisplayNameForType:(unsigned long long)a0;
- (void)showHashWithType:(unsigned long long)a0;

@end
