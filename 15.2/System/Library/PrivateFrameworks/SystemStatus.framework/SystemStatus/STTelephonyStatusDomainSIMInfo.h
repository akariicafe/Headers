@class NSString;

@interface STTelephonyStatusDomainSIMInfo : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isSIMPresent) BOOL SIMPresent;
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

- (id)initWithSIMInfo:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithSIMPresent:(BOOL)a0 label:(id)a1 shortLabel:(id)a2 signalStrengthBars:(unsigned long long)a3 maxSignalStrengthBars:(unsigned long long)a4 serviceState:(unsigned long long)a5 cellularServiceState:(unsigned long long)a6 serviceDescription:(id)a7 secondaryServiceDescription:(id)a8 dataNetworkType:(unsigned long long)a9 providingDataConnection:(BOOL)a10 preferredForDataConnections:(BOOL)a11 registeredWithoutCellular:(BOOL)a12 callForwardingEnabled:(BOOL)a13;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)diffFromData:(id)a0;
- (id)dataByApplyingDiff:(id)a0;

@end
