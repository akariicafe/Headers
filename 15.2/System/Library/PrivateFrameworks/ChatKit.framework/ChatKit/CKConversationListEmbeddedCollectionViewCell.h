@class UITableViewCell, NSObject;
@protocol CKConversationListEmbeddedCollectionViewCellDelegate;

@interface CKConversationListEmbeddedCollectionViewCell : _UICollectionViewListCell

@property (weak, nonatomic) NSObject<CKConversationListEmbeddedCollectionViewCellDelegate> *embeddedCellDelegate;
@property (nonatomic) unsigned long long editingMode;
@property (nonatomic) BOOL shouldUseSidebarBackgroundConfiguration;
@property (retain, nonatomic) UITableViewCell *embeddedTableViewCell;

+ (Class)embeddedTableViewCellClass;
+ (Class)_contentViewClass;

- (void)setEditingMode:(unsigned long long)a0 animated:(BOOL)a1;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)leadingEditingAccessoryConfigurationsForEditingMode:(unsigned long long)a0;
- (id)trailingEditingAccessoryConfigurationsForEditingMode:(unsigned long long)a0;
- (unsigned long long)_viewConfigurationState;
- (void)forwardStateToEmbeddedCell:(unsigned long long)a0;
- (id)pinButtonView;
- (id)multiselectCellAccessoryConfiguration;
- (id)insertCellAccessoryConfiguration;
- (void)pinButtonTapped:(id)a0;
- (void).cxx_destruct;
- (BOOL)__im_ff_uiConsistencyEnabled;
- (void)prepareForReuse;
- (id)configurationState;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;

@end
