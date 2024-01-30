@class CRRecentContactsLibrary;
@protocol CNScheduler;

@interface CNUICoreRecentsManager : NSObject

@property (readonly, nonatomic) CRRecentContactsLibrary *recentsLibrary;
@property (readonly, nonatomic) id<CNScheduler> workQueue;

+ (id)descriptorForRequiredKeys;
+ (id)queryForHandles:(id)a0;
+ (id)allHandlesToSearchForFromContact:(id)a0;
+ (id)handlesForContactProperties:(id)a0;
+ (id)predicateForSearchingHandlesForAllSupportedKinds:(id)a0;
+ (id)queryForHandles:(id)a0 sorted:(BOOL)a1;
+ (id)supportedPropertyDescriptions;
+ (id)supportedRecentsDomains;
+ (id)supportedRecentsKinds;
+ (id /* block */)transformForPropertyDescription:(id)a0;

- (void).cxx_destruct;
- (id)initWithRecentsLibrary:(id)a0 schedulerProvider:(id)a1;
- (id)recentContactsMatchingAllPropertiesOfContact:(id)a0;
- (id)recentContactsMatchingContactProperties:(id)a0;
- (void)removeRecents:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeRecentsWithIdentifiers:(id)a0 domain:(id)a1 completionHandler:(id /* block */)a2;
- (id)sortedRecentHandlesMatchingAllPropertiesOfContact:(id)a0;
- (id)recentsContactsMatchingHandles:(id)a0;
- (id)recentsContactsMatchingHandles:(id)a0 sorted:(BOOL)a1;

@end
