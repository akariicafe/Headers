@class CNContactStoreConfiguration, NSArray;

@interface QPAccountsManager : NSObject

@property (retain, nonatomic) CNContactStoreConfiguration *contactsConfiguration;
@property (retain, nonatomic) NSArray *accountTypes;
@property (retain) NSArray *contentsArray;

+ (id)sharedAccountsManager;

- (void)update:(id)a0;
- (void).cxx_destruct;
- (id)nameToEmailAddresses;

@end
