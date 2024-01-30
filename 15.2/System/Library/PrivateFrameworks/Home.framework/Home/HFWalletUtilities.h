@interface HFWalletUtilities : NSObject

+ (id)walletAppURL;
+ (id)walletKeyColorOfDeviceState:(id)a0;
+ (BOOL)isWalletKeyDeviceStateCompatible:(id)a0;
+ (id)packageIconIdentifierForHome:(id)a0 shouldUseKeyholeAsset:(BOOL)a1 shouldIgnoreDarkMode:(BOOL)a2;
+ (void)handleAddOrShowHomeKeyButtonTapForHome:(id)a0;
+ (unsigned long long)pkPassHomeKeyLiveRenderTypeForHMHomeWalletKeyColor:(long long)a0;
+ (id)walletKeyIconDescriptorForHome:(id)a0 shouldUseKeyholeAsset:(BOOL)a1 shouldIgnoreDarkMode:(BOOL)a2 foriPhoneDevice:(BOOL)a3;

@end
