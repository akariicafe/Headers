@class UIButton, UILabel, PXPeopleScalableAvatarView;
@protocol PXPeopleMeViewControllerDataSource, PXPerson;

@interface PXPeopleMeViewController : UIViewController

@property (retain) id<PXPerson> suggestedPerson;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *denyButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (readonly, nonatomic) id<PXPeopleMeViewControllerDataSource> dataSource;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly, nonatomic) double preferredHeight;

- (id)initWithDataSource:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithDataSource:(id)a0 dismissHandler:(id /* block */)a1;
- (id)_buttonWithTitle:(id)a0 action:(SEL)a1 destructive:(BOOL)a2;
- (void)_dismissViewControllerAsConfirmed:(BOOL)a0;
- (void)_confirmMe:(id)a0;
- (void)_rejectMe:(id)a0;

@end
