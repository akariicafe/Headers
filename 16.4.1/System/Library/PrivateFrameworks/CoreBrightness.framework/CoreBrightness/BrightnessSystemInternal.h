@class NSXPCListener, NSString, NSMutableDictionary, NSObject, BLControl, NSMutableArray;
@protocol OS_os_log;

@interface BrightnessSystemInternal : NSObject <NSXPCListenerDelegate> {
    BLControl *bl;
    id /* block */ _callback;
    NSMutableArray *_callbackProps;
    float _cachedSlider;
    NSXPCListener *_listener;
    NSMutableDictionary *_clients;
    NSMutableDictionary *_clientsProps;
    NSMutableDictionary *_ownedProps;
    NSMutableDictionary *_combinableProps;
    NSMutableDictionary *_clientsConnectionState;
    BOOL _checkConnections;
    id /* block */ connectionCheckBlock;
    NSObject<OS_os_log> *_logHandle;
    double _initDuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerNotificationBlock:(id /* block */)a0;
- (void)setOwnedProperty:(id)a0 forKey:(id)a1 client:(id)a2;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (id)newAggregatedPropertyForCombinablePropertiesForKey:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)setCombinableProperty:(id)a0 forKey:(id)a1 client:(id)a2;
- (void)undoOwnedPropertiesForClient:(id)a0;
- (void)undoCombinablePropertiesForClient:(id)a0;
- (BOOL)isAlsSupported;
- (void)clientDisconnectedWithExpObj:(id)a0;
- (void)destroyServer;
- (BOOL)isACombinableProperty:(id)a0;
- (void)dealloc;
- (id)copyPropertyForKey:(id)a0 client:(id)a1;
- (void)notifyClientsForProperty:(id)a0 key:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 client:(id)a2;
- (id)init;
- (void)clientConnectedWithExpObj:(id)a0;
- (void)setNotificationProperties:(id)a0 forClient:(id)a1;
- (id)adjustDictionaryToBeValidPropertyList:(id)a0;

@end
