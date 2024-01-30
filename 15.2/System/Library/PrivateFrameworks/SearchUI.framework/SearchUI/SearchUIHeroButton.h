@class SFCommand, NSString;

@interface SearchUIHeroButton : UIButton <SearchUICommandButton>

@property (retain) SFCommand *command;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)newButtonsEnabled;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)updateWithTitle:(id)a0 image:(id)a1;
- (id)initWithTitle:(id)a0 image:(id)a1 command:(id)a2;

@end
