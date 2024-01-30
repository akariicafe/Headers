@class STIntroductionModel;

@interface STIntroIdentityViewController : OBWelcomeController

@property (readonly) STIntroductionModel *model;
@property (readonly, copy) id /* block */ continueHandler;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithIntroductionModel:(id)a0 continueHandler:(id /* block */)a1;
- (void)_myDevice:(id)a0;
- (void)_myChildsDevice:(id)a0;

@end
