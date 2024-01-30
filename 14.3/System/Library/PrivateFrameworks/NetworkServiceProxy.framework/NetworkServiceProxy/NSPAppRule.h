@class NSData, NSUUID, NSDate, NWNetworkAgentRegistration, NSArray, NSString, NSPNetworkAgent, NSNumber;

@interface NSPAppRule : NEAppRule

@property (retain, nonatomic) NSPAppRule *defaults;
@property (retain, nonatomic) NSPNetworkAgent *agent;
@property (retain, nonatomic) NWNetworkAgentRegistration *agentRegistration;
@property (retain, nonatomic) NSUUID *configurationIdentifier;
@property (retain, nonatomic) NSDate *enableCheckDate;
@property (nonatomic) BOOL disabledByRatio;
@property (retain, nonatomic) NSData *updateHash;
@property (copy, nonatomic) NSNumber *disableFallback;
@property (copy, nonatomic) NSNumber *enableDirectMultipath;
@property (copy, nonatomic) NSNumber *enableDirectTFO;
@property (copy, nonatomic) NSNumber *enableDirectExtendedValidation;
@property (copy, nonatomic) NSArray *directTLSPorts;
@property (copy, nonatomic) NSNumber *divertDNSOnly;
@property (copy, nonatomic) NSNumber *noDNSDelegation;
@property (copy, nonatomic) NSNumber *serviceID;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *fallbackTimeout;
@property (copy, nonatomic) NSNumber *fallbackBufferLimit;
@property (copy, nonatomic) NSNumber *fallbackCountBeforeImmediateFallback;
@property (copy, nonatomic) NSString *proxyEvaluationPath;
@property (copy, nonatomic) NSNumber *useCustomProtocol;
@property (copy, nonatomic) NSNumber *useLocalFlowDivert;
@property (copy, nonatomic) NSNumber *enableDirectRace;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *edgeSetIdentifier;
@property (copy, nonatomic) NSNumber *connectionTimeout;
@property (copy, nonatomic) NSNumber *connectionIdleTimeout;
@property (copy, nonatomic) NSNumber *enableMultipath;
@property (copy, nonatomic) NSNumber *enableTFO;
@property (copy, nonatomic) NSNumber *requireTFO;
@property (copy, nonatomic) NSNumber *enableNoTFOCookie;
@property (copy, nonatomic) NSNumber *enableUDPRace;
@property (copy, nonatomic) NSNumber *enableRatio;
@property (copy, nonatomic) NSNumber *reenableInterval;
@property (copy, nonatomic) NSNumber *telemetryRatio;
@property (copy, nonatomic) NSNumber *shouldComposeInitialData;
@property (copy, nonatomic) NSNumber *enableOptInPerTask;
@property (copy, nonatomic) NSArray *matchEffectiveApplications;
@property (copy, nonatomic) NSString *locationBundlePath;
@property (copy, nonatomic) NSNumber *initialWindowSize;

+ (id)validateRuleDictionary:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)copyUUIDsForSigningIdentifier:(id)a0 executablePath:(id)a1;
+ (void)loadAppRules:(id)a0 withCompletionHandler:(id /* block */)a1;

- (void)merge:(id)a0;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (id)copyMatchEffectiveApplicationConditions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromDictionary:(id)a0;
- (id)copyTLVData;
- (id)copyAccountIdentifierConditions;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyMatchDomainConditions;
- (id)initFromTLVs:(id)a0;
- (id)copyExecutableConditions;
- (void)teardownNetworkAgent;
- (BOOL)updateNetworkAgent;
- (void)encodeWithCoder:(id)a0;

@end
