@class UIImageView;

@interface CNAvatarCardContactCell : CNAvatarCardActionCell

@property (retain, nonatomic) UIImageView *contactImageView;

- (void)reloadData;
- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)moreHighlighted;
- (void)_updateFonts;

@end
