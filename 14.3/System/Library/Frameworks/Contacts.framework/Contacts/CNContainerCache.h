@class CNContactStore, NSObject, ACAccountStore, CNContainer, CNCache;
@protocol OS_dispatch_queue;

@interface CNContainerCache : NSObject

@property (retain, nonatomic) CNContainer *primaryiCloudContainer;
@property (weak, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) CNCache *cachedAccounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)os_log;

- (void).cxx_destruct;
- (void)dealloc;
- (void)accountStoreDidChange;
- (void)contactStoreDidChange;
- (void)resetPrimaryiCloudContainer;
- (void)resetAccountCache;
- (id)onWorkQueue_findPrimaryiCloudContainer;
- (id)accountForContainer:(id)a0;
- (id)cnAccountForContainer:(id)a0;
- (id)initWithContactStore:(id)a0;

@end
