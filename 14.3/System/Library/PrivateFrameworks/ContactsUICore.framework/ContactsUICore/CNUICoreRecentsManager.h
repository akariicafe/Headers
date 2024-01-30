@class CRRecentContactsLibrary;
@protocol CNScheduler;

@interface CNUICoreRecentsManager : NSObject

@property (readonly, nonatomic) CRRecentContactsLibrary *recentsLibrary;
@property (readonly, nonatomic) id<CNScheduler> workQueue;

+ (id)descriptorForRequiredKeys;
+ (id)supportedPropertyDescriptions;
+ (id)allHandlesToSearchForFromContact:(id)a0;
+ (id /* block */)transformForPropertyDescription:(id)a0;
+ (id)handlesForContactProperties:(id)a0;
+ (id)queryForHandles:(id)a0;
+ (id)predicateForSearchingHandlesForAllSupportedKinds:(id)a0;
+ (id)supportedRecentsDomains;
+ (id)supportedRecentsKinds;

- (void).cxx_destruct;
- (id)recentContactsMatchingContactProperties:(id)a0;
- (void)removeRecentsWithIdentifiers:(id)a0 domain:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithRecentsLibrary:(id)a0 schedulerProvider:(id)a1;
- (void)removeRecents:(id)a0 completionHandler:(id /* block */)a1;
- (id)recentContactsMatchingAllPropertiesOfContact:(id)a0;
- (id)recentsContactsMatchingHandles:(id)a0;

@end
