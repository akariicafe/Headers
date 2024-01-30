@class NSString;

@interface STMutableTelephonyStatusDomainSIMInfo : STTelephonyStatusDomainSIMInfo <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic, getter=isSIMPresent) BOOL SIMPresent;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *shortLabel;
@property (nonatomic) unsigned long long signalStrengthBars;
@property (nonatomic) unsigned long long maxSignalStrengthBars;
@property (nonatomic) unsigned long long serviceState;
@property (nonatomic) unsigned long long cellularServiceState;
@property (copy, nonatomic) NSString *serviceDescription;
@property (copy, nonatomic) NSString *secondaryServiceDescription;
@property (nonatomic) unsigned long long dataNetworkType;
@property (nonatomic, getter=isProvidingDataConnection) BOOL providingDataConnection;
@property (nonatomic, getter=isPreferredForDataConnections) BOOL preferredForDataConnections;
@property (nonatomic, getter=isRegisteredWithoutCellular) BOOL registeredWithoutCellular;
@property (nonatomic, getter=isCallForwardingEnabled) BOOL callForwardingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallForwardingEnabled:(BOOL)a0;
- (void)setProvidingDataConnection:(BOOL)a0;
- (void)setRegisteredWithoutCellular:(BOOL)a0;
- (BOOL)applyDiff:(id)a0;
- (void)setSecondaryServiceDescription:(id)a0;
- (void)setServiceDescription:(id)a0;
- (void)setServiceState:(unsigned long long)a0;
- (void)setPreferredForDataConnections:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCellularServiceState:(unsigned long long)a0;
- (void)setShortLabel:(id)a0;
- (void)setSIMPresent:(BOOL)a0;
- (void)setMaxSignalStrengthBars:(unsigned long long)a0;
- (void)setSignalStrengthBars:(unsigned long long)a0;
- (void)setLabel:(id)a0;
- (void)setDataNetworkType:(unsigned long long)a0;

@end
