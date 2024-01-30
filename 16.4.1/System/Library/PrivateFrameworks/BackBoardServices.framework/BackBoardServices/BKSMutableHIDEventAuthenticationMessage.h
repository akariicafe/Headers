@class BKSHIDEventHitTestLayerInformation;

@interface BKSMutableHIDEventAuthenticationMessage : BKSHIDEventAuthenticationMessage

@property (nonatomic) long long versionedPID;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) unsigned int targetContextID;
@property (nonatomic) unsigned int targetSlotID;
@property (retain, nonatomic) BKSHIDEventHitTestLayerInformation *hitTestInformationFromStartEvent;
@property (retain, nonatomic) BKSHIDEventHitTestLayerInformation *hitTestInformationFromEndEvent;
@property (nonatomic) unsigned long long originIdentifier;
@property (nonatomic) unsigned long long context;
@property (nonatomic) long long secureNameStatus;
@property (nonatomic) BOOL registrantEntitled;

- (void)setEventType:(unsigned int)a0;
- (void)setVersionedPID:(long long)a0;
- (void)setContext:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDestinationAuditToken:(id)a0;
- (void)setHitTestInformationFromEndEvent:(id)a0;
- (void)setHitTestInformationFromStartEvent:(id)a0;
- (void)setOriginIdentifier:(unsigned long long)a0;
- (void)setRegistrantEntitled:(BOOL)a0;
- (void)setSecureNameStatus:(long long)a0;
- (void)setTargetContextID:(unsigned int)a0;
- (void)setTargetSlotID:(unsigned int)a0;

@end
