@class PKStackedTextItemGroup, NSMutableArray;

@interface PKStackedTextItemGroupView : UIView {
    double _intrinsicHeight;
    struct CGSize { double width; double height; } _boundsSize;
    BOOL _initialLayout[2];
    NSMutableArray *_itemViews;
    NSMutableArray *_snapshotsToRemove;
    BOOL _animated;
    long long _slideMode;
}

@property (readonly, nonatomic) long long style;
@property (retain, nonatomic) PKStackedTextItemGroup *content;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) double headerPadding;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void)setContent:(id)a0 animated:(BOOL)a1;
- (void)_updateSubviewsAnimated:(BOOL)a0;

@end
