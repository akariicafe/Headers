@class CNContactStore, NSNotificationCenter;
@protocol CNDowntimeWhitelistContainerFetching, NSObject;

@interface CNDowntimeWhitelist : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<NSObject> contactStoreDidChangeNotificationToken;
@property (readonly, nonatomic) id<CNDowntimeWhitelistContainerFetching> containerFetcher;

+ (id)os_log;
+ (BOOL)isWhitelistedContact:(id)a0;
+ (BOOL)anyContactIsWhitelisted:(id)a0;
+ (id)keyDescriptor;

- (id)initWithContactStore:(id)a0;
- (BOOL)isHandleStringWhitelisted:(id)a0;
- (id)requestForContactsInPermittedContainers;
- (id)initWithContactStore:(id)a0 notificationCenter:(id)a1;
- (id)allWhitelistedContacts:(id *)a0;
- (id)requestForContactsInPermittedContainersWithHandles:(id)a0;
- (id)allWhitelistedHandleStrings:(id *)a0;
- (BOOL)isHandleStringWhitelisted:(id)a0 error:(id *)a1;
- (id)requestForNonUnifiedContacts;
- (id)allWhitelistedHandleStrings;
- (void)dealloc;
- (void)setTestContainerFetcher:(id)a0;
- (id)init;
- (id)whitelistedHandleStringsFromHandleStrings:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0 accountStore:(id)a1 notificationCenter:(id)a2;
- (void)beginObservingChangeNotifications;
- (id)whitelistedHandleStringsFromHandleStrings:(id)a0;

@end
