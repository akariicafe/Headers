@class UIColor, UILabel, UIView;

@interface CFXFilterPickerCollectionViewCell : CFXEffectPickerCollectionViewCell

@property (class, readonly, nonatomic) UIColor *selectionColor;

@property (retain) UILabel *titleView;
@property (weak, nonatomic) UIView *selectionView;
@property (nonatomic, getter=isInCompactMode) BOOL compactMode;

- (void)setSelected:(BOOL)a0;
- (void)setEffect:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)CFX_updateSelectionView;
- (void)CFX_updateTitle;
- (void)CFX_updateLayerProperties;
- (void)configureCellAppearence;

@end
