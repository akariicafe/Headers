@class NSString, AVWeakReference, AVOutputDeviceAuthorizationRequest, AVOutputDeviceAuthorizationSession, AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl;

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl : NSObject <AVOutputDeviceAuthorizationSessionImpl> {
    struct OpaqueFigEndpointUIAgent { } *_agent;
    AVWeakReference *_weakObserver;
    AVOutputDeviceAuthorizationRequest *_currentRequest;
    AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl *_currentRequestImpl;
}

@property (readonly, nonatomic) struct OpaqueFigEndpointUIAgent { } *figEndpointUIAgent;
@property (weak) AVOutputDeviceAuthorizationSession *parentAuthorizationSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFigEndpointUIAgent:(struct OpaqueFigEndpointUIAgent { } *)a0;
- (void)_startNewRequest:(id)a0 impl:(id)a1;
- (void)_finishedWithPrompt;
- (void)dealloc;
- (void)_showAuthPromptWithUniqueID:(id)a0 routeDescriptor:(struct __CFDictionary { } *)a1 pinMode:(BOOL)a2 reason:(struct __CFString { } *)a3;
- (void)_notifyCurrentRequestOfTerminalStatus:(long long)a0 error:(id)a1;
- (void)outputDeviceAuthorizationRequestImplDidCancel:(id)a0;
- (void).cxx_destruct;
- (void)outputDeviceAuthorizationRequestImpl:(id)a0 didRespondWithAuthorizationToken:(id)a1;

@end
