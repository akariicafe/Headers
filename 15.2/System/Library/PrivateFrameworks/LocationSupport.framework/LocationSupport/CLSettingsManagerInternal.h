@class NSString, NSMutableSet, NSMutableDictionary;

@interface CLSettingsManagerInternal : CLIntersiloService <CLSettingsManagerProtocol>

@property (retain) NSMutableSet *clients;
@property (retain) NSMutableDictionary *settingsDictionary;
@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;
+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;
+ (id)getSilo;

- (void)flush;
- (void)endService;
- (void)beginService;
- (void)refresh;
- (id)syncgetSettingsAndRegisterForUpdates:(byref id)a0;
- (void)unregisterForUpdates:(byref id)a0;
- (id)syncgetSetValue:(id)a0 forKey:(id)a1 withoutNotifying:(byref id)a2;
- (void)updateClientsWithDictionary:(id)a0;

@end
