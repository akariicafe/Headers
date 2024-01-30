@class CKSpotlightQueryResult, NSString, UITableViewCell, CALayer;
@protocol CKConversationSearchCellProtocol, CKMessageSearchResultCellDelegate;

@interface CKMessageSearchResultCell : UICollectionViewCell <CKConversationSearchCellDelegate, CKSearchResultCell>

@property (retain, nonatomic) UITableViewCell<CKConversationSearchCellProtocol> *searchCell;
@property (retain, nonatomic) CKSpotlightQueryResult *result;
@property (copy, nonatomic) NSString *searchText;
@property (readonly, nonatomic) CALayer *topHairline;
@property (readonly, nonatomic) CALayer *bottomHairline;
@property (weak, nonatomic) id<CKMessageSearchResultCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)prepareForReuse;
- (id)configurationState;
- (void)layoutSubviews;
- (unsigned long long)_viewConfigurationState;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1 mode:(unsigned long long)a2;
- (void)refreshForSearchTextIfNeeded:(id)a0;
- (double)widthForDeterminingAvatarVisibility;
- (void)forwardStateToEmbeddedCell:(unsigned long long)a0;

@end
