@class PSSpecifier;

@interface STDisableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *disableScreenTimeSpecifier;

- (void)setCoordinator:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)confirmDisableScreenTime:(id)a0;
- (void)disableScreenTime:(id)a0;
- (id)disableScreenTimeConfirmationPrompt;
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)a0 action:(SEL)a1;
- (void)updateDisableScreenTimeSpecifier;

@end
