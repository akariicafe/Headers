@interface PKWalletVisibility : NSObject

+ (BOOL)isWalletRestricted;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)updateWalletVisibility;
+ (BOOL)isWalletVisible;

@end
