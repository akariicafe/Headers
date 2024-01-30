@class NSString;

@interface STTelephonyStatusDomainSIMInfo : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isSIMPresent) BOOL SIMPresent;
@property (readonly, nonatomic, getter=isBootstrap) BOOL bootstrap;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *shortLabel;
@property (readonly, nonatomic) unsigned long long signalStrengthBars;
@property (readonly, nonatomic) unsigned long long maxSignalStrengthBars;
@property (readonly, nonatomic) unsigned long long serviceState;
@property (readonly, nonatomic) unsigned long long cellularServiceState;
@property (readonly, copy, nonatomic) NSString *serviceDescription;
@property (readonly, copy, nonatomic) NSString *secondaryServiceDescription;
@property (readonly, nonatomic) unsigned long long dataNetworkType;
@property (readonly, nonatomic, getter=isProvidingDataConnection) BOOL providingDataConnection;
@property (readonly, nonatomic, getter=isPreferredForDataConnections) BOOL preferredForDataConnections;
@property (readonly, nonatomic, getter=isRegisteredWithoutCellular) BOOL registeredWithoutCellular;
@property (readonly, nonatomic, getter=isCallForwardingEnabled) BOOL callForwardingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)diffFromData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
