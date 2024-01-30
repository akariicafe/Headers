@class PKStackedTextItemGroup, PKStackedTextItemGroupView;

@interface PKStackedTextItemGroupCell : PKTableViewCell {
    PKStackedTextItemGroupView *_groupView;
    long long _style;
    BOOL _animated;
}

@property (retain, nonatomic) PKStackedTextItemGroup *content;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setContent:(id)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (id)initWithGroupViewStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
