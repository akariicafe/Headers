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

- (id)initWithSpecifier:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_bottomPadding;
- (double)_topPadding;
- (id)_labelText;
- (void)updateLabelText;
- (double)preferredHeightForWidth:(double)a0;
- (id)_URLTarget;
- (id)_URLText;
- (double)_labelInset;
- (long long)_labelTextAlignment;
- (void)_urlTapped:(id)a0;
- (void)clearSpecifier;

@end
