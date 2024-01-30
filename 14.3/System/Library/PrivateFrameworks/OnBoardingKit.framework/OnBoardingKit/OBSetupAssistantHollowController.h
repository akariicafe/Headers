@class NSString, OBHollowButton;

@interface OBSetupAssistantHollowController : OBWelcomeController <OBSetupAssistantSupport>

@property (retain, nonatomic) OBHollowButton *contentButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addHollowButtonWithTitle:(id)a0 target:(id)a1 downPressSelector:(SEL)a2 upLiftSelector:(SEL)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
