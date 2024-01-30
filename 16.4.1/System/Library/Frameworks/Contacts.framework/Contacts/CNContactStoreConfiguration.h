@class CNContactsEnvironment, CNManagedConfiguration, NSObject;
@protocol OS_tcc_identity;

@interface CNContactStoreConfiguration : NSObject

@property (nonatomic) BOOL includeLocalContacts;
@property (nonatomic) BOOL includeSuggestedContacts;
@property (nonatomic) BOOL includeDonatedContacts;
@property (nonatomic) BOOL includeIncludeManagedAppleIDs;
@property (nonatomic) BOOL useInProcessMapperExclusively;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (retain, nonatomic) CNContactsEnvironment *environment;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
