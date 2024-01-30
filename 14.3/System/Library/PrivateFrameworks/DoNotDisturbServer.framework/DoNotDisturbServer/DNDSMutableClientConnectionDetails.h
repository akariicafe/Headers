@class NSUUID, NSSet;

@interface DNDSMutableClientConnectionDetails : DNDSClientConnectionDetails

@property (copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID;
@property (copy, nonatomic) NSSet *assertionUpdateClientIdentifiers;
@property (nonatomic) BOOL wantsStateUpdates;
@property (nonatomic) BOOL wantsSettingsUpdates;

- (void)setAssertionUpdateClientIdentifiers:(id)a0;
- (void)setInterruptionInvalidationAssertionUUID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setWantsSettingsUpdates:(BOOL)a0;
- (void)setWantsStateUpdates:(BOOL)a0;

@end
