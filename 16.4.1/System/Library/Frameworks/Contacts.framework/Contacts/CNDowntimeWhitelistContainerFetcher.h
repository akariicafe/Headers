@class CNContactStore, NSString, NSNotificationCenter, ACAccountStore, NSObject, CNContainer;
@protocol OS_os_log, NSObject;

@interface CNDowntimeWhitelistContainerFetcher : NSObject <CNDowntimeWhitelistContainerFetching>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<NSObject> accountStoreDidChangeNotificationToken;
@property (readonly, nonatomic) CNContainer *primaryiCloudContainer;
@property (readonly, nonatomic) CNContainer *downtimeWhitelistContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)fetchPrimaryiCloudCardDAVAccountIdentifier;
- (id)fetchPrimaryiCloudCardDAVContainer;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0 accountStore:(id)a1 notificationCenter:(id)a2;
- (void)beginObservingChangeNotifications;

@end
