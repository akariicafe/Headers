@class UILabel, NSAttributedString, UIView;

@interface PUPhotoOwnerCommentCell : UITableViewCell

@property (copy, nonatomic) NSAttributedString *ownerString;
@property (readonly, retain, nonatomic) UILabel *ownerContentLabel;
@property (readonly, retain, nonatomic) UIView *styledSeparatorView;
@property (nonatomic) BOOL usesCompactSeparators;

+ (double)heightOfOwnerCellWithAsset:(id)a0 forWidth:(double)a1 forInterfaceOrientation:(long long)a2;
+ (id)_ownerStringForAsset:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateContentFromAsset:(id)a0;

@end
