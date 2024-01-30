@class UIImageView;

@interface CNAvatarCardContactCell : CNAvatarCardActionCell

@property (retain, nonatomic) UIImageView *contactImageView;

- (void)_updateFonts;
- (void)reloadData;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (BOOL)moreHighlighted;

@end
