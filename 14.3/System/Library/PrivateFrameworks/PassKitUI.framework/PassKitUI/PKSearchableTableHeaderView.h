@class UILabel, UITextField;

@interface PKSearchableTableHeaderView : PKTableHeaderView {
    UITextField *_searchField;
    UILabel *_searchFieldLabel;
}

@property (readonly, nonatomic) UILabel *searchFieldLabel;
@property (readonly, nonatomic) UITextField *searchField;
@property (nonatomic) BOOL showsSearchField;
@property (readonly, nonatomic) double searchFieldOffset;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
