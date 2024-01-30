@class NSArray;

@interface HIDEventSystemClient : NSObject {
    struct __IOHIDEventSystemClient { } *_client;
    id /* block */ _eventHandler;
    id /* block */ _resetHandler;
    id /* block */ _filterHandler;
    id /* block */ _serviceHandler;
    id /* block */ _propertyChangedHandler;
    id /* block */ _cancelHandler;
    BOOL _activated;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _handlerLock;
}

@property (readonly) NSArray *services;

- (void)setResetHandler:(id /* block */)a0;
- (void)setPropertyChangedHandler:(id /* block */)a0 matching:(id)a1;
- (void)setMatching:(id)a0;
- (id)propertyForKey:(id)a0;
- (struct __IOHIDEventSystemClient { } *)client;
- (void)setEventFilterHandler:(id /* block */)a0;
- (void)setServiceNotificationHandler:(id /* block */)a0;
- (id)initWithType:(long long)a0;
- (void)setDispatchQueue:(id)a0;
- (void)setEventHandler:(id /* block */)a0;
- (id)initWithType:(long long)a0 andAttributes:(id)a1;
- (void)cancel;
- (void)dealloc;
- (void)setCancelHandler:(id /* block */)a0;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;

@end
