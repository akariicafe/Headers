@class NSMutableDictionary;

@interface _IDSDeviceConnectionActiveMap : NSObject {
    NSMutableDictionary *_activeConnectionMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _writeLock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasActiveConnection:(id)a0 forKey:(id)a1;
- (void)removeActiveConnection:(id)a0 forKey:(id)a1;
- (void)setActiveConnection:(id)a0 forKey:(id)a1;

@end
