@class STIntroductionViewModel;

@interface STIntroCommunicationSafetyViewController : OBWelcomeController

@property (readonly) STIntroductionViewModel *model;
@property (readonly, copy) id /* block */ continueHandler;

- (void).cxx_destruct;
- (void)loadView;
- (void)_openCommunicationSafetyLearnMoreLink;
- (void)_setUpLater:(id)a0;
- (void)_turnOnCommunicationSafety:(id)a0;
- (id)initWithIntroductionModel:(id)a0 childName:(id)a1 continueHandler:(id /* block */)a2;

@end
