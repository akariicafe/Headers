@interface ASCWebKitSPISupport : NSObject

@property (class, nonatomic) BOOL shouldUseAlternateCredentialStore;

+ (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;
+ (void)resetCredentialStore;

@end
