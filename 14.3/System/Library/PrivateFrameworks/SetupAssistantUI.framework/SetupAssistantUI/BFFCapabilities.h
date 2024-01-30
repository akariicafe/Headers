@class NSObject;
@protocol OS_dispatch_queue;

@interface BFFCapabilities : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (nonatomic) BOOL shouldShowWalletInitialized;
@property (nonatomic) BOOL shouldShowWallet;

+ (id)sharedCapabilities;

- (void)_localeChanged:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasSecureElement;
- (BOOL)isAppleTV;
- (void)shouldShowWallet:(id /* block */)a0;

@end
