@class _TtC8Contacts22CNContactsProviderHost, CNUnfairLock, CNCache, NSObject;
@protocol OS_os_log;

@interface CNContactsProviderModerator : NSObject

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) _TtC8Contacts22CNContactsProviderHost *host;
@property (readonly, nonatomic) CNCache *cache;
@property (readonly, nonatomic) CNUnfairLock *lock;

+ (id)synchronizeAllUsingSession:(id)a0;

- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (id)synchronizeUsingSession:(id)a0 bundleIdentifier:(id)a1;

@end
