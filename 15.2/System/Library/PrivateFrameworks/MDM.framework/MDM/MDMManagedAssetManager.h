@interface MDMManagedAssetManager : NSObject

+ (void)_promptUserForiTunesAccount:(id)a0 accountNameEditable:(BOOL)a1 canCreateNewAccount:(BOOL)a2 assertion:(id)a3 completionBlock:(id /* block */)a4;
+ (void)promptUserToLoginToiTunesIfNeededTitle:(id)a0 message:(id)a1 assertion:(id)a2 completionBlock:(id /* block */)a3;

@end
