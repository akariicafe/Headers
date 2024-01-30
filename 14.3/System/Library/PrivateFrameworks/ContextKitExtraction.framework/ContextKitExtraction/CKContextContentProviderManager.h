@class NSHashTable;

@interface CKContextContentProviderManager : NSObject {
    NSHashTable *_providers;
}

+ (void)_observeApplicationStateNotifications;
+ (id)sharedManager;
+ (BOOL)isSpringBoard;

- (void)addProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)prepareDonationWithNonce:(unsigned long long)a0 andReply:(id /* block */)a1;
- (BOOL)_isDonationAllowedWithControlCode:(unsigned char)a0;
- (void)removeProvider:(id)a0;

@end
