@class CNFRegLearnMoreButton, NSString, PSSpecifier, NSURL, UILabel, UITableView;

@interface CNFRegTableLabel : UIView <PSHeaderFooterView> {
    UILabel *_label;
    PSSpecifier *_specifier;
    CNFRegLearnMoreButton *_urlButton;
}

@property (copy, nonatomic) NSString *URLText;
@property (copy, nonatomic) NSURL *URLTarget;
@property (nonatomic) UITableView *cnfreg_tableView;
@property (nonatomic) BOOL isTopmostHeader;

- (void)layoutSubviews;
- (double)_topPadding;
- (id)_labelText;
- (double)_bottomPadding;
- (void).cxx_destruct;
- (void)dealloc;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;
- (void)clearSpecifier;
- (void)updateLabelText;
- (double)_labelInset;
- (long long)_labelTextAlignment;
- (id)_URLTarget;
- (void)_urlTapped:(id)a0;
- (id)_URLText;

@end
