@class CNContactStore, NSString, CNContactsProviderSession, CNUnfairLock;

@interface CNContactsProvider : NSObject

@property (nonatomic) BOOL isAlmond;
@property (retain, nonatomic) CNContactStore *providerStore;
@property (readonly) CNUnfairLock *lock;
@property (retain, nonatomic) CNContactsProviderSession *currentSession;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (id)init;
- (void)endSession;
- (void)disableWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startSession:(id)a0;
- (void)disableExtensionWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableExtensionWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableWithCompletionHandler:(id /* block */)a0;
- (long long)fetchExtensionCountWithError:(id *)a0;
- (id)fetchExtensionItemsWithError:(id *)a0;
- (BOOL)isSessionRunning;
- (void)requestExtensionCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)synchronizeUsingSession:(id)a0 completionHandler:(id /* block */)a1;

@end
