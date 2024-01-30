@class NSString, PKPushRegistry, NSHashTable;

@interface CKPKPushRegistry : NSObject <PKPushRegistryDelegate>

@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) PKPushRegistry *pushRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPushRegistry;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)pushRegistry:(id)a0 didUpdatePushCredentials:(id)a1 forType:(id)a2;
- (void).cxx_destruct;
- (id)_init;
- (void)pushRegistry:(id)a0 didReceiveIncomingPushWithPayload:(id)a1 forType:(id)a2 withCompletionHandler:(id /* block */)a3;

@end
