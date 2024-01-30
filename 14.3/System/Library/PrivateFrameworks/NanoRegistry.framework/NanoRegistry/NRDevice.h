@class NRRegistry, NSUUID, NSMutableDictionary, NSPointerArray, NSMutableArray;

@interface NRDevice : NSObject <NSSecureCoding> {
    NRDevice *_me;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_pairingID;
    NRRegistry *_registry;
    NSMutableDictionary *_oldPropertiesForChangeNotifications;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_observers;
    NSPointerArray *_promiscuousObservers;
    NSMutableDictionary *_changeBlocks;
    NSMutableArray *_promiscuousChangeBlocks;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *pairingID;

- (id)valueForProperty:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)supportsCapability:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)_setValue:(id)a0 forProperty:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)archived;
- (id)initWithRegistry:(id)a0 diff:(id)a1 pairingID:(id)a2 notify:(BOOL)a3;
- (BOOL)canMigrate;
- (id)migrationError;
- (BOOL)migrationConfirmed;
- (id)propertyNames;
- (void)registerForPropertyChanges:(id)a0 withBlock:(id /* block */)a1;
- (void)unregisterForPropertyChanges:(id)a0 withBlock:(id /* block */)a1;
- (void)addPropertyObserver:(id)a0 forPropertyChanges:(id)a1;
- (void)removePropertyObserver:(id)a0 forPropertyChanges:(id)a1;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
