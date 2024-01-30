@class NSString, UILabel, UIView;

@interface PKDataReleaseReleasedDataCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_intentRetainLabel;
    UILabel *_retainElementsLabel;
    UIView *_separatorView;
    UILabel *_intentDoNotRetainLabel;
    UILabel *_doNotRetainElementsLabel;
    BOOL _isTemplateLayout;
    UIView *_topSeparatorView;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *intentRetainTitle;
@property (copy, nonatomic) NSString *intentRetainElements;
@property (copy, nonatomic) NSString *intentDoNotRetainTitle;
@property (copy, nonatomic) NSString *intentDoNotRetainElements;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
