@class CKSpotlightQueryResult, CNContact, NSString, CKAvatarView;

@interface CKSearchAvatarSupplementryView : UICollectionReusableView <CKSearchResultSupplementryCell>

@property (retain, nonatomic) CKAvatarView *avatarView;
@property (nonatomic) unsigned long long parentContentType;
@property (retain, nonatomic) CKSpotlightQueryResult *associatedResult;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;
+ (double)desiredZPosition;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateVisibilityIfNeeded;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_parentPreviewDidChange:(id)a0;

@end
