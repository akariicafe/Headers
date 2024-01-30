@class WFSegmentedControlTableItem, WFItemBasedTableSection, WFTextFieldTableItem, NSNumber, WFTableDataSource;
@protocol WFSSHKeyGenerationViewControllerDelegate;

@interface WFSSHKeyGenerationViewController : UITableViewController

@property (readonly, nonatomic) WFTableDataSource *dataSource;
@property (readonly, nonatomic) WFItemBasedTableSection *keyTypeSection;
@property (readonly, nonatomic) WFItemBasedTableSection *keySizeSection;
@property (readonly, nonatomic) WFItemBasedTableSection *commentSection;
@property (readonly, nonatomic) WFSegmentedControlTableItem *keyTypeItem;
@property (readonly, nonatomic) WFSegmentedControlTableItem *keySizeItem;
@property (nonatomic) Class currentFormat;
@property (retain, nonatomic) NSNumber *currentKeySize;
@property (readonly, nonatomic) WFTextFieldTableItem *commentItem;
@property (weak, nonatomic) id<WFSSHKeyGenerationViewControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)donePressed:(id)a0;
- (void)cancelPressed:(id)a0;
- (void)viewDidLoad;
- (void)updateVisibleItems;
- (void)authenticationTypeDidChange:(id)a0;
- (void)keySizeDidChange:(id)a0;
- (void)generateKeyPairAndFinish;

@end
