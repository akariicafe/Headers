@class UIImageView;

@interface CNAvatarCardContactCell : CNAvatarCardActionCell

@property (retain, nonatomic) UIImageView *contactImageView;

- (void)reloadData;
- (void)prepareForReuse;
- (void)_updateFonts;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (BOOL)moreHighlighted;

@end
