@class UILabel;

@interface SeymourUI.TVShelfLargeTitleView : UICollectionReusableView {
    void /* unknown type, empty encoding */ indexPath;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shelf;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
}

@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;

@end
