@class CNContactStore, NSObject, ACAccountStore, CNContainer, CNCache;
@protocol OS_dispatch_queue;

@interface CNContainerCache : NSObject

@property (retain, nonatomic) CNContainer *primaryiCloudContainer;
@property (weak, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) CNCache *cachedAccounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)os_log;

- (id)initWithContactStore:(id)a0;
- (void)dealloc;
- (void)contactStoreDidChange;
- (void).cxx_destruct;
- (id)accountForContainer:(id)a0;
- (void)accountStoreDidChange;
- (id)cnAccountForContainer:(id)a0;
- (id)onWorkQueue_findPrimaryiCloudContainer;
- (void)resetAccountCache;
- (void)resetPrimaryiCloudContainer;

@end
