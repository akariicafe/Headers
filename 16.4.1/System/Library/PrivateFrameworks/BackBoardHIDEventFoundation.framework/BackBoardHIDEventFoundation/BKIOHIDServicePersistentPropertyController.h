@class NSMutableArray;

@interface BKIOHIDServicePersistentPropertyController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handlersLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _defaultsLock;
    NSMutableArray *_handlersLock_handlers;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerHandler:(id)a0;
- (id)_senderDescriptorKey:(id)a0;
- (id)allPersistentPropertiesForServicesMatchingDescriptor:(id)a0;
- (id)persistentPropertiesForKeys:(id)a0 forSenderDescriptor:(id)a1;
- (void)setPersistentProperties:(id)a0 forSenderDescriptor:(id)a1;

@end
