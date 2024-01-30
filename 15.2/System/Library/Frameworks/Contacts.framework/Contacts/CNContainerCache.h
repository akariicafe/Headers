@class CNContactStore, NSObject, ACAccountStore, CNContainer, CNCache;
@protocol OS_dispatch_queue;

@interface CNContainerCache : NSObject

@property (retain, nonatomic) CNContainer *primaryiCloudContainer;
@property (weak, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) CNCache *cachedAccounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)os_log;

- (id)accountForContainer:(id)a0;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (void)dealloc;
- (void)resetAccountCache;
- (void)contactStoreDidChange;
- (void)resetPrimaryiCloudContainer;
- (void)accountStoreDidChange;
- (id)onWorkQueue_findPrimaryiCloudContainer;
- (id)cnAccountForContainer:(id)a0;

@end
