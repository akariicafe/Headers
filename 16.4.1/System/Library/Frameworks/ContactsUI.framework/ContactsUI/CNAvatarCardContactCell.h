@class UIImageView;

@interface CNAvatarCardContactCell : CNAvatarCardActionCell

@property (retain, nonatomic) UIImageView *contactImageView;

- (void)awakeFromNib;
- (void)_updateFonts;
- (void)reloadData;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (BOOL)moreHighlighted;

@end
