@class PSSpecifier;

@interface STDisableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *disableScreenTimeSpecifier;

- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)confirmDisableScreenTime:(id)a0;
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)a0 action:(SEL)a1;
- (void)updateDisableScreenTimeSpecifier;
- (id)disableScreenTimeConfirmationPrompt;
- (void)disableScreenTime:(id)a0;

@end
