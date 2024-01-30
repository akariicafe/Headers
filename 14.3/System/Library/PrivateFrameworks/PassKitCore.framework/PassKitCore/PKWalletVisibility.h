@interface PKWalletVisibility : NSObject

+ (BOOL)isWalletVisible;
+ (void)updateWalletVisibility;
+ (id)setOfActiveRestrictionUUIDs;
+ (BOOL)isWalletRestricted;

@end
