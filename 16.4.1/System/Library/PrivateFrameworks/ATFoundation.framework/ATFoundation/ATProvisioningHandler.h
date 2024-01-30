@class NSString;

@interface ATProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler> {
    int _endpointType;
    NSString *_expectedRequestCommand;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageLinkWasOpened:(id)a0;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (void).cxx_destruct;
- (id)_paramsForRequest:(id)a0;
- (void)_processProvisioningRequest:(id)a0 withParams:(id)a1 onMessageLink:(id)a2 withCompletion:(id /* block */)a3;
- (void)_processProvisioningResponse:(id)a0 toCommand:(id)a1 onMessageLink:(id)a2;
- (void)_processProvisioningResponse:(id)a0 withParams:(id)a1 onMessageLink:(id)a2 withCompletion:(id /* block */)a3;
- (void)_sendProvisioningRequest:(id)a0 OnMessageLink:(id)a1;
- (id)initAsEndpointType:(int)a0;

@end
