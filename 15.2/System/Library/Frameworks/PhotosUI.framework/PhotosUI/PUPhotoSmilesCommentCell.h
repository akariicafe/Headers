@class UILabel, NSOrderedSet, UIView;

@interface PUPhotoSmilesCommentCell : UITableViewCell

@property (readonly, retain, nonatomic) UILabel *smileContentLabel;
@property (readonly, retain, nonatomic) UIView *styledSeparatorView;
@property (copy, nonatomic) NSOrderedSet *userLikes;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL usesCompactSeparators;

+ (double)heightOfSmileCellWithComments:(id)a0 forWidth:(double)a1 isVideo:(BOOL)a2 forInterfaceOrientation:(long long)a3;
+ (id)_attributedStringForComments:(id)a0 color:(id)a1 isVideo:(BOOL)a2;
+ (id)_smileStringForComments:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_updateContent;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
