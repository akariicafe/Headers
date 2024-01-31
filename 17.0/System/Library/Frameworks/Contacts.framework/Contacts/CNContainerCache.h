@class CNContactStore, NSObject, ACAccountStore, CNContainer, CNCache;
@protocol OS_dispatch_queue;

@interface CNContainerCache : NSObject

@property (retain, nonatomic) CNContainer *primaryiCloudContainer;
@property (weak, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) CNCache *cachedAccounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)os_log;

- (void)dealloc;
- (void)contactStoreDidChange;
- (id)initWithContactStore:(id)a0;
- (id)accountForContainer:(id)a0;
- (void).cxx_destruct;
- (void)accountStoreDidChange;
- (id)cnAccountForContainer:(id)a0;
- (id)onWorkQueue_findPrimaryiCloudContainer;
- (void)resetAccountCache;
- (void)resetPrimaryiCloudContainer;

@end
