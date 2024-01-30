@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface REInterfaceCache : RESingleton {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_supportedInterfaces;
}

- (void).cxx_destruct;
- (id)_supportedProtocols;
- (id)_init;
- (void)enumerateExportedPropertiesOfClass:(Class)a0 usingBlock:(id /* block */)a1;
- (BOOL)exportedInterfaceClass:(Class)a0;
- (id)_queue_valueForKey:(id)a0 level:(unsigned long long)a1;
- (BOOL)_supportsCache;
- (id)_accessInterfaceForKey:(id)a0;
- (BOOL)_interface:(id)a0 implementsInterface:(id)a1;
- (void)_enumeratePropertiesOfInterface:(id)a0 forProtocol:(id)a1 usingBlock:(id /* block */)a2;
- (void)_enumerateMethodsOfInterface:(id)a0 forProtocol:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)exportedInterfaceProtocol:(id)a0;
- (void)enumerateExportedPropertiesOfProtocol:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateExportedMethodsOfClass:(Class)a0 usingBlock:(id /* block */)a1;
- (void)enumerateExportedMethodsOfProtocol:(id)a0 usingBlock:(id /* block */)a1;

@end
