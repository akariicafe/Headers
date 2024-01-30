@class NSString, NSArray, UILabel, NSMutableArray, UIView;

@interface PKDataReleaseRequestedDataCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_intentRetainLabel;
    NSMutableArray *_retainElementViews;
    UIView *_separatorView;
    UILabel *_intentDoNotRetainLabel;
    NSMutableArray *_doNotRetainElementViews;
    BOOL _isTemplateLayout;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *intentRetainTitle;
@property (copy, nonatomic) NSArray *intentRetainElements;
@property (copy, nonatomic) NSString *intentDoNotRetainTitle;
@property (copy, nonatomic) NSArray *intentDoNotRetainElements;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_recreateViews:(id)a0 forElements:(id)a1;

@end
