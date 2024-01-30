@class NSArray;

@interface CKGroupUpdateBannerView : CKUpdateBannerView

@property (retain, nonatomic) NSArray *groupUpdates;
@property (nonatomic) unsigned long long updateBannerType;

- (void)_updateAvatarView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1 useNamedTitles:(BOOL)a2 updates:(id)a3 inUpdatesMode:(BOOL)a4;
- (id)getContactDisplayName:(id)a0;
- (id)cancelGlyph;
- (void)cancelButtonTapped:(id)a0;
- (void)_updateSubtitleLabel;
- (double)maxLabelWidthForSize:(struct CGSize { double x0; double x1; })a0;
- (double)titleLabelAlignmentX;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void)_updateTitleLabel;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
