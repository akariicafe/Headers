@interface AVTAvatarUpdaterFactory : NSObject

+ (id /* block */)updaterForPreset:(id)a0 pairedPreset:(id)a1;
+ (id /* block */)updaterForColor:(id)a0 variationStore:(id)a1 pairedColor:(id)a2;
+ (id /* block */)updaterForPairingCategory:(id)a0 variationStore:(id)a1;

@end
