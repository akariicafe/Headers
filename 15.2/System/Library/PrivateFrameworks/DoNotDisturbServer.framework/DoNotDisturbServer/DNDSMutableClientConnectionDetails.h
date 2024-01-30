@class NSUUID, NSSet;

@interface DNDSMutableClientConnectionDetails : DNDSClientConnectionDetails

@property (copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID;
@property (copy, nonatomic) NSSet *assertionUpdateClientIdentifiers;
@property (copy, nonatomic) NSSet *activeAssertionUpdateClientIdentifiers;
@property (nonatomic) BOOL wantsStateUpdates;
@property (nonatomic) BOOL wantsSettingsUpdates;
@property (nonatomic) BOOL wantsModeUpdates;
@property (nonatomic) BOOL wantsActiveModeUpdates;
@property (nonatomic) BOOL wantsGlobalConfigurationUpdates;
@property (nonatomic) BOOL wantsMeDeviceStateUpdates;

- (void)setAssertionUpdateClientIdentifiers:(id)a0;
- (void)setWantsActiveModeUpdates:(BOOL)a0;
- (void)setWantsGlobalConfigurationUpdates:(BOOL)a0;
- (void)setWantsStateUpdates:(BOOL)a0;
- (void)setWantsMeDeviceStateUpdates:(BOOL)a0;
- (void)setWantsModeUpdates:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInterruptionInvalidationAssertionUUID:(id)a0;
- (void)setWantsSettingsUpdates:(BOOL)a0;
- (void)setActiveAssertionUpdateClientIdentifiers:(id)a0;

@end
