@class UILabel, NSString, UIActivityIndicatorView;

@interface UIPrintTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSString *messageText;
@property (nonatomic) BOOL spinSpinner;
@property (nonatomic) BOOL spinnerHidden;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)a0;

@end
