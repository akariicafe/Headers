@class UIStackView, NSArray, NSString, UILabel;
@protocol CPEntityNameProviding;

@interface CPSNameViewController : UIViewController <CPSEntityUpdateSupporting>

@property (retain, nonatomic) id<CPEntityNameProviding> entity;
@property (readonly, nonatomic) UILabel *primaryLabel;
@property (readonly, nonatomic) UILabel *secondaryLabel;
@property (readonly, nonatomic) UILabel *tertiaryLabel;
@property (readonly, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (id)initWithEntity:(id)a0;
- (void)setupViews;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)updateViews;
- (void)updateWithEntity:(id)a0;

@end
