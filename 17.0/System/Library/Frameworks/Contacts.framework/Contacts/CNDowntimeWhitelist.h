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

- (id)whitelistedHandleStringsFromHandleStrings:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setTestContainerFetcher:(id)a0;
- (id)initWithContactStore:(id)a0;
- (id)initWithContactStore:(id)a0 accountStore:(id)a1 notificationCenter:(id)a2;
- (id)allWhitelistedContacts:(id *)a0;
- (void)beginObservingChangeNotifications;
- (id)requestForContactsInPermittedContainers;
- (id)whitelistedHandleStringsFromHandleStrings:(id)a0 error:(id *)a1;
- (BOOL)isHandleStringWhitelisted:(id)a0 error:(id *)a1;
- (id)requestForContactsInPermittedContainersWithHandles:(id)a0;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0 notificationCenter:(id)a1;
- (id)allWhitelistedHandleStrings;
- (id)requestForNonUnifiedContacts;
- (id)allWhitelistedHandleStrings:(id *)a0;
- (BOOL)isHandleStringWhitelisted:(id)a0;

@end
