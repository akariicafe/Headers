@class NSString, ACAccount, AMSProcessInfo;

@interface AMSMetricsIdentifier : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) double duration;

+ (id)_sharedQueue;
+ (id)_database;
+ (id)_accountIdentifierForAccount:(id)a0;
+ (void)cleanupIdentifiers;
+ (void)removeIdentifiersForAccount:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_generateCacheKey;
- (id)generateIdentifier;
- (id)generateEventFields;

@end
