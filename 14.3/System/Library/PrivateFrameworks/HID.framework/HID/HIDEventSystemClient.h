@class NSArray;

@interface HIDEventSystemClient : NSObject {
    struct __IOHIDEventSystemClient { } *_client;
    id /* block */ _eventHandler;
    id /* block */ _resetHandler;
    id /* block */ _filterHandler;
    id /* block */ _serviceHandler;
    id /* block */ _propertyChangedHandler;
    id /* block */ _cancelHandler;
}

@property (readonly) NSArray *services;

- (void)cancel;
- (void)setEventHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCancelHandler:(id /* block */)a0;
- (id)initWithType:(long long)a0;
- (id)description;
- (void)activate;
- (id)propertyForKey:(id)a0;
- (void)setDispatchQueue:(id)a0;
- (struct __IOHIDEventSystemClient { } *)client;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setResetHandler:(id /* block */)a0;
- (void)setMatching:(id)a0;
- (id)initWithType:(long long)a0 andAttributes:(id)a1;
- (void)setEventFilterHandler:(id /* block */)a0;
- (void)setServiceNotificationHandler:(id /* block */)a0;
- (void)setPropertyChangedHandler:(id /* block */)a0 matching:(id)a1;

@end
