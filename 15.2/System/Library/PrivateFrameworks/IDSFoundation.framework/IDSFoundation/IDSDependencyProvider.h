@class NSString, NSMutableDictionary;

@interface IDSDependencyProvider : NSObject <IDSServiceLoader, IDSKeychainAdapter, IDSPushAdapter, IDSXPCAdapter> {
    NSMutableDictionary *_registeredAdapters;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registeredObjectForProtocol:(id)a0;
+ (id)userDefaults;
+ (id)keychainAdapter;
+ (void)registerObject:(id)a0 forProtocol:(id)a1;
+ (id)serviceLoader;
+ (id)sharedProvider;
+ (id)systemMonitorAdapter;
+ (id)pushAdapter;
+ (id)XPCAdapter;

- (id)registeredObjectForProtocol:(id)a0;
- (id)placeholderMachPort;
- (id)createServiceConnectionWithServiceName:(const char *)a0 invalidationHandler:(id /* block */)a1 terminationHandler:(id /* block */)a2 peerEventHandler:(id /* block */)a3 peerQueue:(id)a4;
- (id)apsConnectionWithEnvironmentName:(id)a0 namedDelegatePort:(id)a1 enablePushDuringSleep:(BOOL)a2 queue:(id)a3;
- (void)registerObject:(id)a0 forProtocol:(id)a1;
- (id)loadServiceDictionaries;
- (void).cxx_destruct;
- (BOOL)setKeychainData:(id)a0 service:(id)a1 account:(id)a2 accessGroup:(id)a3 allowSync:(BOOL)a4 error:(int *)a5;
- (id)_init;
- (BOOL)removeKeychainDataOnService:(id)a0 account:(id)a1 error:(int *)a2;
- (BOOL)getKeychainData:(id *)a0 service:(id)a1 account:(id)a2 accessGroup:(id)a3 error:(int *)a4;

@end
