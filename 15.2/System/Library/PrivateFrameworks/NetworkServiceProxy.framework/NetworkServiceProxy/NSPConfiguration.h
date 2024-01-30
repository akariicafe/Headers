@class NSDate, NSString, NSArray, NSURLSession, NSPPrivacyProxyConfiguration, NSDictionary, NSNumber;

@interface NSPConfiguration : NSObject <NSSecureCoding, NSCopying> {
    NSString *_configServerHost;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long diskVersion;
@property (retain) NSNumber *version;
@property (retain) NSPConfiguration *defaults;
@property (copy) NSNumber *timestamp;
@property (copy) NSNumber *enabled;
@property (copy) NSString *etag;
@property (copy) NSDate *resurrectionDate;
@property (copy) NSArray *appRules;
@property (copy) NSNumber *configServerEnabled;
@property (copy) NSString *configServerHost;
@property (copy) NSNumber *configServerPort;
@property (copy) NSString *configServerPath;
@property (copy) NSNumber *urlRequestTimeout;
@property (copy) NSString *waldoLeafOID;
@property (copy) NSNumber *waldoRevocationFailClosed;
@property (retain, nonatomic) NSURLSession *privacyProxyURLSession;
@property BOOL ignoreInvalidCerts;
@property (retain, nonatomic) NSDictionary *edgeSets;
@property (copy) NSNumber *persistMetrics;
@property (readonly) NSDate *dayPassExpirationDate;
@property (readonly) NSDate *earliestEnableCheckDate;
@property (readonly) BOOL isDead;
@property (copy) NSPPrivacyProxyConfiguration *proxyConfiguration;
@property (copy, nonatomic) NSNumber *userTier;
@property (copy) NSNumber *proxyTrafficState;
@property (copy) NSDate *configurationFetchDate;
@property (copy) NSNumber *cloudSubscriptionCheckEnabled;
@property (retain, nonatomic) NSNumber *geohashSharingEnabledStatus;
@property (retain, nonatomic) NSNumber *proxyAccountType;
@property (retain, nonatomic) NSNumber *userPreferredTier;
@property (retain, nonatomic) NSNumber *trialConfigVersion;

+ (BOOL)validatePrivacyProxyConfiguration:(id)a0;
+ (BOOL)validateSignature:(id)a0 publicKey:(struct __SecKey { } *)a1 signedData:(id)a2;
+ (id)proxyAccountTypeToString:(id)a0;
+ (id)proxyTrafficStateToString:(id)a0;
+ (id)defaultConfiguration;
+ (void)verifyConfigurationSignature:(id)a0 configuration:(id)a1 host:(id)a2 validateCert:(BOOL)a3 completionHandler:(id /* block */)a4;

- (void)merge:(id)a0;
- (void)teardown;
- (id)diagnostics;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initFromKeychain;
- (void)setupNSURLSession;
- (void)updateNetworkAgents;
- (BOOL)evaluateEnableRatios;
- (id)initFromPreferences;
- (void)setup;
- (id)description;
- (id)initWithTimestamp:(id)a0 fromDictionary:(id)a1 waldoSource:(long long)a2;
- (id)getEdgeSetForAppRule:(id)a0;
- (void)removeFromKeychain;
- (void).cxx_destruct;
- (BOOL)saveToPreferences;
- (id)initWithCoder:(id)a0;
- (id)createConfigFetchURLWithDomain:(id)a0 timestamp:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)incrementSessionCountersOnFirstLaunch;
- (id)copyTLVData;
- (id)copyAgentResultsForAppRule:(id)a0;
- (id)getEdgeSetForSigningIdentifier:(id)a0;
- (id)initFromTLVs:(id)a0;
- (void)enumerateEdgeSetsWithBlock:(id /* block */)a0;
- (id)getCurrentKeyBagForAppRule:(id)a0;
- (id)loadBuiltinAppRulesFromDisk;
- (void)saveToKeychain;
- (BOOL)resetStaleEdgeSets;

@end
