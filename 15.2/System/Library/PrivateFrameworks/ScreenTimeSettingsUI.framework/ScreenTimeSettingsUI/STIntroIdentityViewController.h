@class STIntroductionModel;

@interface STIntroIdentityViewController : OBWelcomeController

@property (readonly) STIntroductionModel *model;
@property (readonly, copy) id /* block */ continueHandler;

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithIntroductionModel:(id)a0 continueHandler:(id /* block */)a1;
- (void)_myDevice:(id)a0;
- (void)_myChildsDevice:(id)a0;

@end
