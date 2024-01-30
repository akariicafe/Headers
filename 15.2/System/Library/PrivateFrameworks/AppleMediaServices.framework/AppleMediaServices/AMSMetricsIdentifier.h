@class AMSMetricsIdentifierStore, NSString, ACAccount, AMSProcessInfo;

@interface AMSMetricsIdentifier : NSObject {
    AMSMetricsIdentifierStore *_store;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) double duration;

+ (id)clientIdKey;
+ (void)cleanupIdentifiers;
+ (void)removeIdentifiersForAccount:(id)a0;

- (id)generateIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)generateEventFields;

@end
