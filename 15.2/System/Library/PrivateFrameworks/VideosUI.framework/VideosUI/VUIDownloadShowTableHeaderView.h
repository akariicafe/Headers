@class VUISeparatorView, NSString, VUILabel, UIButton;

@interface VUIDownloadShowTableHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) UIButton *headerButton;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ selectionHandler;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (id)_buttonWithString:(id)a0 existingButton:(id)a1;
- (void)_selectButtonAction:(id)a0;

@end
