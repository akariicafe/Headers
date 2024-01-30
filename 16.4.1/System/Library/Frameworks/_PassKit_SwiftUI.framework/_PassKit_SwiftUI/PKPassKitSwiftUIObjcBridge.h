@interface PKPassKitSwiftUIObjcBridge : NSObject

+ (BOOL)passbookHasBeenDeleted;
+ (id)accessibilityTitleForType:(long long)a0;
+ (struct CGImage { } *)buttonImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 type:(long long)a2 style:(long long)a3;
+ (BOOL)didAddPasses:(id)a0;
+ (id)localizedDeletableWalletStringFor:(id)a0;
+ (void)openInstallWallet;

@end
