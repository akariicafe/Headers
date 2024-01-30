@interface BKSMutableHIDEventAuthenticationMessage : BKSHIDEventAuthenticationMessage

@property (nonatomic) long long versionedPID;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) unsigned long long originIdentifier;
@property (nonatomic) unsigned long long context;

- (void)setEventType:(unsigned int)a0;
- (void)setDestinationAuditToken:(id)a0;
- (void)setOriginIdentifier:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setContext:(unsigned long long)a0;
- (void)setVersionedPID:(long long)a0;

@end
