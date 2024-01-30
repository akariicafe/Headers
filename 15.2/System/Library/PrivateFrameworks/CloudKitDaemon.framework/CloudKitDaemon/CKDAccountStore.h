@interface CKDAccountStore : NSObject

+ (id)sharedAccountStore;
+ (id)sharedPrimaryAccount;
+ (void)invalidatePrimaryAccountCache;

- (id)init;

@end
