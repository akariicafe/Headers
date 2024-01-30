@class NSUUID, NSSet;

@interface DNDSClientConnectionDetails : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID;
@property (readonly, copy, nonatomic) NSSet *assertionUpdateClientIdentifiers;
@property (readonly, nonatomic) BOOL wantsStateUpdates;
@property (readonly, nonatomic) BOOL wantsSettingsUpdates;

- (id)init;
- (id)_initWithDetails:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithInterruptionInvalidationAssertionUUID:(id)a0 assertionUpdateClientIdentifiers:(id)a1 wantsStateUpdates:(BOOL)a2 wantsSettingsUpdates:(BOOL)a3;

@end
