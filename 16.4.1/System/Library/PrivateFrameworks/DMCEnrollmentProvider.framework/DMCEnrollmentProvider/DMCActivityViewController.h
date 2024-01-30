@class NSString, UILabel, UIActivityIndicatorView;

@interface DMCActivityViewController : DMCEnrollmentTemplateTableViewController

@property (retain, nonatomic) NSString *activityText;
@property (nonatomic) BOOL showBottomView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)_textFont;
- (id)initWithActivityText:(id)a0 showBottomView:(BOOL)a1;

@end
