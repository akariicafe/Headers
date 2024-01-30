@class UIStackView, CNGeminiResult, NSArray, CNContactGeminiView, CNUIGeminiDataSource, NSLayoutYAxisAnchor, CNContact, NSString, UILabel;
@protocol CNKeyDescriptor;

@interface CNStarkContactInfoViewController : UIViewController <CNUIGeminiDataSourceDelegate>

@property (class, readonly, nonatomic) id<CNKeyDescriptor> descriptorForRequiredKeys;

@property (readonly, nonatomic) UILabel *primaryLabel;
@property (readonly, nonatomic) UILabel *secondaryLabel;
@property (readonly, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (readonly, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactGeminiView *contactGeminiView;
@property (retain, nonatomic) CNUIGeminiDataSource *geminiDataSource;
@property (retain, nonatomic) CNGeminiResult *geminiResult;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)geminiDataSourceDidUpdate:(id)a0;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (BOOL)shouldShowGemini;
- (void)updateViews;

@end
