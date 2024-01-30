@class CCSRemoteServiceConnection;

@interface CCSControlCenterService : NSObject {
    CCSRemoteServiceConnection *_connection;
}

+ (id)sharedInstance;

- (void)requestEnableModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)_init;
- (void)getEnabledStateOfModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setVisibility:(BOOL)a0 forModuleWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentModuleWithIdentifier:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestDisableModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)requestEnableModuleWithIdentifier:(id)a0 force:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(id /* block */)a0;

@end
