@class UILabel, PRXSelectionIndicatorView;

@interface PRXOptionCollectionViewCell : UICollectionViewCell {
    PRXSelectionIndicatorView *_selectionIndicator;
}

@property (readonly, nonatomic) UILabel *textLabel;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
