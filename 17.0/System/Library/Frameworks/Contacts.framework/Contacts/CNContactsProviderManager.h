@class CNContactsProviderModerator, NSString, _TtC8Contacts22CNContactsProviderHost, CNContainer;

@interface CNContactsProviderManager : NSObject

@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (retain, nonatomic) _TtC8Contacts22CNContactsProviderHost *providerHost;
@property (retain, nonatomic) CNContactsProviderModerator *moderator;
@property (readonly, nonatomic) CNContainer *providerContainer;

+ (BOOL)isConnectionForContactsProvider:(id)a0;

- (id)initWithAuditToken:(id)a0;
- (void).cxx_destruct;
- (BOOL)disableExtensionWithBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)enableExtensionWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)fetchExtensionCount;
- (id)fetchExtensionItems;
- (id)getActualBundleIdentifier:(id)a0;
- (id)isExtensionEnabledWithBundleIdentifier:(id)a0;
- (id)requestHostExtensionCommand:(id)a0 error:(id *)a1;
- (BOOL)synchronizeUsingSession:(id)a0 error:(id *)a1;

@end
