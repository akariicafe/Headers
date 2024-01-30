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

- (id)headerView;
- (void)viewDidLoad;
- (id)contentView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)buttonTray;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)_relayoutContentSubviewIfNeeded;
- (void)_updateScrollUnderLayout;
- (void)addContentSubView:(id)a0 heightConstraintForLayout:(id /* block */)a1;
- (long long)contentViewLayout;
- (void)resetLayoutTo:(long long)a0;

@end
