@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CCSRemoteServiceConnection : NSObject <CCSRemoteServiceServerProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)requestEnableModuleWithIdentifier:(id)a0 force:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)presentModuleWithIdentifier:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)requestDisableModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setVisibility:(BOOL)a0 forModuleWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getEnabledStateOfModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
