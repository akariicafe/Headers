@interface SUDebugAssembly : NSObject <NFAssembly, MFMailComposeViewControllerDelegate>

- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)loadInRegistry:(id)a0;
- (id)init;

@end
