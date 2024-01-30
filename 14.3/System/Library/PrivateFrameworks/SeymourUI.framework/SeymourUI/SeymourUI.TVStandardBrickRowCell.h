@class UILabel;

@interface SeymourUI.TVStandardBrickRowCell : SeymourUI.TVFocusableCollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ tvArtworkView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
}

@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
