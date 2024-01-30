@class NSString, CKLabel, CKConversation, CKAvatarView;

@interface CKConversationSearchResultCell : UICollectionViewCell <CNAvatarViewDelegate, CKSearchResultCell>

@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) CKLabel *nameLabel;
@property (retain, nonatomic) CKConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)_configureAvatarViewForConversation:(id)a0;
- (void)_configureNameLabelForConversation:(id)a0 searchText:(id)a1;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)refreshForSearchTextIfNeeded:(id)a0;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1 mode:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
