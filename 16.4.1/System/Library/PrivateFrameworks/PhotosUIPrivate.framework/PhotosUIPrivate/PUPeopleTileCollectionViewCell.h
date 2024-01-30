@class PHPerson, PXSuggestLessPeopleHelper, UIImageView, UIGraphicsImageRenderer, UIView, PHAsset, UIButton;
@protocol PUPeopleTileDelegate;

@interface PUPeopleTileCollectionViewCell : UICollectionViewCell <PXSuggestLessPeopleHelperDelegate>

@property (retain, nonatomic) UIView *questionView;
@property (readonly, nonatomic) UIButton *menuButton;
@property (readonly, nonatomic) UIImageView *avatarImageView;
@property (readonly, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIGraphicsImageRenderer *renderer;
@property struct CGSize { double width; double height; } previousContentViewSize;
@property (retain, nonatomic) PHPerson *person;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PXSuggestLessPeopleHelper *suggestLessPeopleHelper;
@property (weak, nonatomic) id<PUPeopleTileDelegate> peopleDelegate;

+ (struct CGSize { double x0; double x1; })itemSizeForTraitCollection:(id)a0;

- (void)accessibilityInvertColorsStatusDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)suggestLessPeopleHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)suggestLessPeopleHelper:(id)a0 presentViewController:(id)a1;
- (void)_displayAvatarImageRequestResult:(id)a0 faceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id)a2;
- (void)_featureLessActionTapped:(id)a0;
- (void)_manageTagsActionTapped:(id)a0;
- (void)_nameActionTapped:(id)a0;
- (void)_reloadAvatarImageViewForPerson:(id)a0;
- (void)_setupActionsForPerson:(id)a0 asset:(id)a1;
- (void)_showAlbumActionTapped:(id)a0;
- (void)_untagActionTapped:(id)a0 asset:(id)a1;
- (void)setPerson:(id)a0 asset:(id)a1;

@end
