@class NSURLSession, NSArray, NSString, NSDate, NSNumber, NSDictionary;

@interface NSPConfiguration : NSObject <NSSecureCoding, NSCopying> {
    NSString *_waldoHost;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long diskVersion;
@property (retain) NSPConfiguration *defaults;
@property (readonly) NSNumber *version;
@property (readonly) NSNumber *timestamp;
@property (copy) NSNumber *enabled;
@property (copy) NSDate *resurrectionDate;
@property (copy) NSArray *appRules;
@property (copy) NSNumber *waldoEnabled;
@property (copy) NSString *waldoHost;
@property (copy) NSNumber *waldoPort;
@property (copy) NSString *waldoPath;
@property (copy) NSNumber *waldoRequestTimeout;
@property (copy) NSString *waldoLeafOID;
@property (copy) NSNumber *waldoRevocationFailClosed;
@property (retain, nonatomic) NSURLSession *waldoSession;
@property BOOL ignoreInvalidCerts;
@property (retain, nonatomic) NSDictionary *edgeSets;
@property (copy) NSNumber *persistMetrics;
@property (readonly) NSDate *dayPassExpirationDate;
@property (readonly) NSDate *earliestEnableCheckDate;
@property (readonly) BOOL isDead;

+ (id)defaultConfiguration;

- (void)merge:(id)a0;
- (void)setup;
- (id)getCurrentKeyBagForAppRule:(id)a0;
- (void)teardown;
- (id)initWithTimestamp:(id)a0 fromDictionary:(id)a1 waldoSource:(long long)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getEdgeSetForSigningIdentifier:(id)a0;
- (BOOL)resetStaleEdgeSets;
- (id)copyTLVData;
- (id)initWithCoder:(id)a0;
- (id)copyAgentResultsForAppRule:(id)a0;
- (void)removeFromKeychain;
- (void)incrementSessionCountersOnFirstLaunch;
- (id)createWaldoURLWithDomain:(id)a0 timestamp:(id)a1;
- (void)enumerateEdgeSetsWithBlock:(id /* block */)a0;
- (BOOL)evaluateEnableRatios;
- (id)initFromTLVs:(id)a0;
- (void)saveToKeychain;
- (id)initFromKeychain;
- (void)updateNetworkAgents;
- (id)loadBuiltinAppRulesFromDisk;
- (id)getEdgeSetForAppRule:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
