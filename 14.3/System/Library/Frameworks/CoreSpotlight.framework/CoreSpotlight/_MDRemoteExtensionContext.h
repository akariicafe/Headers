@class NSString, CSIndexExtensionRequestHandler;

@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol>

@property (retain, nonatomic) CSIndexExtensionRequestHandler *requestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getLastUpdateTimeWithCompletionHandler:(id /* block */)a0;
- (void)performJob:(id)a0 acknowledgementHandler:(id /* block */)a1;
- (id)hostContext;

@end
