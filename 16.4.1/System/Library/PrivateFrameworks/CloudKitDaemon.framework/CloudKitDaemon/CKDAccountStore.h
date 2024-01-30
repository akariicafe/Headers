@interface CKDAccountStore : NSObject

+ (id)sharedPrimaryAccount;
+ (void)invalidatePrimaryAccountCache;
+ (id)sharedAccountStore;

- (id)init;

@end
