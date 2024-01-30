@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface REInterfaceCache : RESingleton {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_supportedInterfaces;
}

- (BOOL)_interface:(id)a0 implementsInterface:(id)a1;
- (BOOL)_supportsCache;
- (id)_supportedProtocols;
- (id)_accessInterfaceForKey:(id)a0;
- (BOOL)exportedInterfaceProtocol:(id)a0;
- (id)_queue_valueForKey:(id)a0 level:(unsigned long long)a1;
- (void)enumerateExportedPropertiesOfClass:(Class)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)exportedInterfaceClass:(Class)a0;
- (void)enumerateExportedMethodsOfClass:(Class)a0 usingBlock:(id /* block */)a1;
- (void)_enumerateMethodsOfInterface:(id)a0 forProtocol:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateExportedMethodsOfProtocol:(id)a0 usingBlock:(id /* block */)a1;
- (id)_init;
- (void)_enumeratePropertiesOfInterface:(id)a0 forProtocol:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateExportedPropertiesOfProtocol:(id)a0 usingBlock:(id /* block */)a1;

@end
