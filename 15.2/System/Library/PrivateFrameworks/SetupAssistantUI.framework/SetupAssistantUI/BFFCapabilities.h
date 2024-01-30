@class NSObject;
@protocol OS_dispatch_queue;

@interface BFFCapabilities : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (nonatomic) BOOL shouldShowWalletInitialized;
@property (nonatomic) BOOL shouldShowWallet;

+ (id)sharedCapabilities;

- (void)_localeChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAppleTV;
- (void)dealloc;
- (BOOL)hasSecureElement;
- (void)shouldShowWallet:(id /* block */)a0;

@end
