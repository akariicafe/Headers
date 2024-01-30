@class NSString, ACAccount, AMSProcessInfo;

@interface AMSMetricsIdentifierStore : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) BOOL includeAccountMatchStatus;
@property (nonatomic) double resetInterval;

+ (id)_sharedQueue;
+ (id)_sync;
+ (id)_accountIdentifierForAccount:(id)a0;
+ (void)removeIdentifiersForAccount:(id)a0;
+ (id)identifierStoreWithAccount:(id)a0 bagNamespace:(id)a1 bag:(id)a2;
+ (id)_database;
+ (void)cleanupIdentifiers;

- (void).cxx_destruct;
- (void)reset;
- (id)_generateEventFieldsForKeys:(id)a0 date:(id)a1;
- (void)_generateFutureIdentifiersIfNeededForKeys:(id)a0 storeInfo:(id)a1 afterPeriod:(long long)a2 inDatabase:(id)a3 date:(id)a4;
- (id)_generateIdentifierKey:(id)a0 storeInfo:(id)a1 period:(long long)a2;
- (id)_generateStoreKey;
- (id)_identifierInfoForKey:(id)a0 storeInfo:(id)a1 period:(long long)a2 inDatabase:(id)a3 date:(id)a4 setValue:(id)a5 needsToSync:(BOOL *)a6 error:(id *)a7;
- (id)_identifierStoreInfoForKeys:(id)a0 inDatabase:(id)a1 date:(id)a2 needsToSync:(BOOL *)a3 error:(id *)a4;
- (id)_identifiersForKeys:(id)a0 currentDate:(id)a1;
- (void)_setIdentifier:(id)a0 withStartedDate:(id)a1 forKey:(id)a2;
- (id)generateEventFieldsForKeys:(id)a0;
- (id)generateEventFieldsForKeys:(id)a0 date:(id)a1;
- (id)identifierForKey:(id)a0;
- (id)identifierIfExistsForKey:(id)a0;
- (void)setIdentifier:(id)a0 forKey:(id)a1;

@end
