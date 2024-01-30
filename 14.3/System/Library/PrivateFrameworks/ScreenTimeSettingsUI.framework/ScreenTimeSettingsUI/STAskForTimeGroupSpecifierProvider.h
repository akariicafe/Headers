@interface STAskForTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

- (id)init;
- (void)setCoordinator:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)requestSpecifiers;
- (void)confirmRespondToRequest:(id)a0;
- (id)_createSpecifierForAskForMore:(id)a0;
- (void)respondToRequest:(id)a0 withApproval:(BOOL)a1 timeApproved:(id)a2;

@end
