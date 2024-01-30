@class CCSRemoteServiceConnection;

@interface CCSControlCenterService : NSObject {
    CCSRemoteServiceConnection *_connection;
}

+ (id)sharedInstance;

- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)requestEnableModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestEnableModuleWithIdentifier:(id)a0 force:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)presentModuleWithIdentifier:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_init;
- (void)requestDisableModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setVisibility:(BOOL)a0 forModuleWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getEnabledStateOfModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
