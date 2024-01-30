@class NSUUID, NSSet;

@interface DNDSClientConnectionDetails : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID;
@property (readonly, copy, nonatomic) NSSet *assertionUpdateClientIdentifiers;
@property (readonly, copy, nonatomic) NSSet *activeAssertionUpdateClientIdentifiers;
@property (readonly, nonatomic) BOOL wantsStateUpdates;
@property (readonly, nonatomic) BOOL wantsSettingsUpdates;
@property (readonly, nonatomic) BOOL wantsModeUpdates;
@property (readonly, nonatomic) BOOL wantsActiveModeUpdates;
@property (readonly, nonatomic) BOOL wantsGlobalConfigurationUpdates;
@property (readonly, nonatomic) BOOL wantsMeDeviceStateUpdates;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithInterruptionInvalidationAssertionUUID:(id)a0 assertionUpdateClientIdentifiers:(id)a1 activeAssertionUpdateClientIdentifiers:(id)a2 wantsStateUpdates:(BOOL)a3 wantsSettingsUpdates:(BOOL)a4 wantsModeUpdates:(BOOL)a5 wantsActiveModeUpdates:(BOOL)a6 wantsGlobalConfigurationUpdates:(BOOL)a7 wantsMeDeviceStateUpdates:(BOOL)a8;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithDetails:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
