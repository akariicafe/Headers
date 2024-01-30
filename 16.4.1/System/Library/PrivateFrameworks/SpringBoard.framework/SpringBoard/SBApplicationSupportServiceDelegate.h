@class NSString, UISApplicationSupportService;

@interface SBApplicationSupportServiceDelegate : NSObject <UISApplicationSupportServiceDelegate> {
    UISApplicationSupportService *_service;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestPasscodeUnlockUIForClient:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestPasscodeCheckUIForClient:(id)a0 withCompletion:(id /* block */)a1;
- (id)service:(id)a0 initializeClient:(id)a1;
- (void)_rebuildDefaultContext;
- (BOOL)service:(id)a0 overrideClientInitialization:(id)a1;
- (void)dealloc;
- (void)destroyScenesWithPersistentIdentifiers:(id)a0 animationType:(unsigned long long)a1 destroySessions:(BOOL)a2 forClient:(id)a3 completion:(id /* block */)a4;
- (id)init;
- (void).cxx_destruct;

@end
