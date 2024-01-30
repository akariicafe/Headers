@class NSMutableDictionary;
@protocol _CDUserContext;

@interface REDuetContextStore : RESingleton {
    id<_CDUserContext> _context;
    NSMutableDictionary *_registrations;
}

- (void).cxx_destruct;
- (id)_init;
- (id)isConnectedToCarQuery;
- (id)isConnectedToAudioBluetoothDeviceQuery;
- (void)registerForQuery:(id)a0 updateBlock:(id /* block */)a1;
- (void)unregisterForQuery:(id)a0;

@end
