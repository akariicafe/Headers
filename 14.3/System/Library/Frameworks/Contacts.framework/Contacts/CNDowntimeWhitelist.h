@class CNContactStore, NSNotificationCenter;
@protocol CNDowntimeWhitelistContainerFetching, NSObject;

@interface CNDowntimeWhitelist : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<NSObject> contactStoreDidChangeNotificationToken;
@property (readonly, nonatomic) id<CNDowntimeWhitelistContainerFetching> containerFetcher;

+ (BOOL)isWhitelistedContact:(id)a0;
+ (id)keyDescriptor;
+ (BOOL)anyContactIsWhitelisted:(id)a0;
+ (id)os_log;

- (id)whitelistedHandleStringsFromHandleStrings:(id)a0;
- (id)init;
- (id)initWithContactStore:(id)a0 accountStore:(id)a1 notificationCenter:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)requestForContactsInPermittedContainers;
- (id)requestForContactsInPermittedContainersWithHandles:(id)a0;
- (id)allWhitelistedHandleStrings:(id *)a0;
- (id)initWithContactStore:(id)a0 notificationCenter:(id)a1;
- (void)setTestContainerFetcher:(id)a0;
- (BOOL)isHandleStringWhitelisted:(id)a0 error:(id *)a1;
- (void)beginObservingChangeNotifications;
- (id)requestForNonUnifiedContacts;
- (id)allWhitelistedHandleStrings;
- (id)initWithContactStore:(id)a0;
- (id)allWhitelistedContacts:(id *)a0;
- (BOOL)isHandleStringWhitelisted:(id)a0;
- (id)whitelistedHandleStringsFromHandleStrings:(id)a0 error:(id *)a1;

@end
