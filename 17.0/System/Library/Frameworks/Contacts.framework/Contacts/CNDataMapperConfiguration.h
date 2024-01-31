@class CNManagedConfiguration, CNContactsProviderManager, NSObject, CNContactsEnvironment;
@protocol OS_tcc_identity;

@interface CNDataMapperConfiguration : NSObject

@property (retain, nonatomic) CNContactsEnvironment *environment;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic) long long identifierAuditMode;
@property (nonatomic) BOOL isContactsProvider;
@property (retain, nonatomic) CNContactsProviderManager *contactsProviderManager;

- (id)description;
- (id)initWithContactStoreConfiguration:(id)a0;
- (void).cxx_destruct;

@end
