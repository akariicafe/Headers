@interface HFWalletUtilities : NSObject

+ (id)handleAddOrShowHomeKeyButtonTapForHome:(id)a0;
+ (id)walletKeyIconDescriptorForHome:(id)a0 shouldUseKeyholeAsset:(BOOL)a1 shouldIgnoreDarkMode:(BOOL)a2 foriPhoneDevice:(BOOL)a3;
+ (BOOL)isWalletKeyDeviceStateCompatible:(id)a0;
+ (id)packageIconIdentifierForHome:(id)a0 shouldUseKeyholeAsset:(BOOL)a1 shouldIgnoreDarkMode:(BOOL)a2;
+ (unsigned long long)pkPassHomeKeyLiveRenderTypeForHMHomeWalletKeyColor:(long long)a0;
+ (id)walletAppFromAppStoreURL;
+ (id)walletAppURL;
+ (id)walletKeyColorOfDeviceState:(id)a0;

@end
