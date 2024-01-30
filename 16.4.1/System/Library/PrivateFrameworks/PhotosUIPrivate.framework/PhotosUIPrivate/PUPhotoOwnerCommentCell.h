@class UILabel, NSAttributedString, UIView;

@interface PUPhotoOwnerCommentCell : UITableViewCell

@property (copy, nonatomic) NSAttributedString *ownerString;
@property (readonly, retain, nonatomic) UILabel *ownerContentLabel;
@property (readonly, retain, nonatomic) UIView *styledSeparatorView;
@property (nonatomic) BOOL usesCompactSeparators;

+ (id)_ownerStringForAsset:(id)a0;
+ (double)heightOfOwnerCellWithAsset:(id)a0 forWidth:(double)a1 forInterfaceOrientation:(long long)a2;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateContentFromAsset:(id)a0;

@end
