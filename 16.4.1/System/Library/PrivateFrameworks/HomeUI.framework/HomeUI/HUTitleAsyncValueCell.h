@class UIActivityIndicatorView;

@interface HUTitleAsyncValueCell : HUTitleValueCell

@property (retain) UIActivityIndicatorView *spinnerView;
@property (nonatomic) BOOL showSpinner;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)createSpinner;

@end
