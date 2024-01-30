@class NSString, ACAccount, AMSProcessInfo;

@interface AMSMetricsIdentifierStore : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) double resetInterval;

+ (id)_database;
+ (void)cleanupIdentifiers;
+ (void)removeIdentifiersForAccount:(id)a0;
+ (id)_accountIdentifierForAccount:(id)a0;
+ (id)identifierStoreWithAccount:(id)a0 bagNamespace:(id)a1 bag:(id)a2;
+ (void)_sync;
+ (id)_sharedQueue;

- (void)_generateFutureIdentifiersIfNeededForKeys:(id)a0 storeInfo:(id)a1 afterPeriod:(long long)a2 inDatabase:(id)a3 date:(id)a4;
- (id)_identifierStoreInfoForKeys:(id)a0 inDatabase:(id)a1 date:(id)a2 needsToSync:(BOOL *)a3 error:(id *)a4;
- (id)_generateStoreKey;
- (id)generateEventFieldsForKeys:(id)a0;
- (id)_generateIdentifierKey:(id)a0 storeInfo:(id)a1 period:(long long)a2;
- (void).cxx_destruct;
- (id)_identifierInfoForKey:(id)a0 storeInfo:(id)a1 period:(long long)a2 inDatabase:(id)a3 date:(id)a4 setValue:(id)a5 needsToSync:(BOOL *)a6 error:(id *)a7;
- (void)setIdentifier:(id)a0 forKey:(id)a1;
- (id)identifierForKey:(id)a0;
- (id)_identifiersForKeys:(id)a0 currentDate:(id)a1;
- (void)reset;

@end
