@class NSString, OBWelcomeController, UIView, UIImage;

@interface OBSetupAssistantDynamicLayoutController : UIViewController <OBSetupAssistantSupport>

@property (retain, nonatomic) OBWelcomeController *backingController;
@property (copy, nonatomic) id /* block */ constraintForLayoutFactory;
@property (retain, nonatomic) UIView *mainContentSubview;
@property (retain, nonatomic) UIView *outerContentView;
@property (copy, nonatomic) NSString *localTitle;
@property (copy, nonatomic) NSString *localDetailText;
@property (retain, nonatomic) UIImage *localImage;
@property (nonatomic) BOOL enableStickyHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)buttonTray;
- (long long)contentViewLayout;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)headerView;
- (void)_updateScrollUnderLayout;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)_relayoutContentSubviewIfNeeded;
- (void)addContentSubView:(id)a0 heightConstraintForLayout:(id /* block */)a1;
- (void)resetLayoutTo:(long long)a0;
- (id)contentView;

@end
