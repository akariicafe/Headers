@class NSMutableDictionary;

@interface ENCredentialStore : NSObject <NSCoding>

@property (retain, nonatomic) NSMutableDictionary *store;

+ (id)loadCredentialsFromAppDefaults;

- (void)clearAllCredentials;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)addCredentials:(id)a0;
- (id)credentialsForHost:(id)a0;
- (void)removeCredentials:(id)a0;

@end
