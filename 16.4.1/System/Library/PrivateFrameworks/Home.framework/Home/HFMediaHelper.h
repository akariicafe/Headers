@interface HFMediaHelper : NSObject

+ (BOOL)isAudioAnalysisSupportedDevice:(id)a0;
+ (BOOL)isAnyKindOfGroup:(id)a0;
+ (BOOL)isAppleTV:(id)a0;
+ (BOOL)isContainedWithinAGroup:(id)a0;
+ (BOOL)isHomePod:(id)a0;
+ (BOOL)isHomePodMediaSystem:(id)a0;
+ (BOOL)isHomePodMini:(id)a0;
+ (BOOL)isHomePodOriginal:(id)a0;
+ (id)mediaContainerSymbolConfiguration;
+ (id)mediaIconDescriptorForMediaContainer:(id)a0;
+ (id)mediaProfileContainerForItem:(id)a0 forTopLevel:(BOOL)a1;
+ (id)siriLanguageOptionFor:(id)a0;
+ (BOOL)supportsDoorbellChime:(id)a0;
+ (BOOL)isSiriDisabled:(id)a0;
+ (id)changeSiriLanguageOptionFor:(id)a0 to:(id)a1;
+ (id)_findAccessorySettingSiriLanguageAdapterFor:(id)a0;
+ (id)allAccessoriesContainedIn:(id)a0;
+ (BOOL)canMediaProfileContainer:(id)a0 supportHomeTheaterWithAppleTV:(id)a1;
+ (id)changeAllSiriLanguageOptionsFor:(id)a0 to:(id)a1;
+ (BOOL)isAirPortExpress:(id)a0;
+ (BOOL)isAudioReceiver:(id)a0;
+ (BOOL)isContainedWithinMediaSystem:(id)a0;
+ (BOOL)isDoorbellChimeEnabled:(id)a0;
+ (BOOL)isHomePodMiniMediaSystem:(id)a0;
+ (BOOL)isHomePodOriginalMediaSystem:(id)a0;

@end
