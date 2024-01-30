@class NSXPCConnection, NSString, RTIDocumentRequest, NSSet, RTIDataPayload, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface RTIInputSystemServiceSession : RTIInputSystemSession <RTIInputSystemSessionProtocol, RTIInputSystemPayloadDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_externalOperationsQueue;
    NSMutableSet *_supplementalLexicons;
    NSMutableSet *_rtiSupplementalLexicons;
    NSMutableDictionary *_pendingSupplementalLexicons;
    NSMutableDictionary *_pendingRTISupplementalLexicons;
}

@property (readonly, nonatomic) unsigned long long payloadVersion;
@property (nonatomic) BOOL isPaused;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) RTIDataPayload *currentDataPayload;
@property (retain, nonatomic) RTIDocumentRequest *defaultRequest;
@property (readonly, nonatomic) NSSet *supplementalLexicons;
@property (readonly, nonatomic) NSSet *rtiSupplementalLexicons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithConnection:(id)a0;

- (int)pid;
- (void)flushOperations;
- (void)handleTextActionPayload:(id)a0;
- (void)dealloc;
- (id)valueForEntitlement:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)performDocumentRequest:(id)a0 completion:(id /* block */)a1;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (void)_killConnectionWithCallback;
- (oneway void)beginRemoteTextInputSessionWithID:(id)a0 documentTraits:(id)a1 initialDocumentState:(id)a2;
- (oneway void)beginRemoteTextInputSessionWithID:(id)a0 options:(id)a1 documentTraits:(id)a2 initialDocumentState:(id)a3;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0 options:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didAddRTISupplementalLexicon:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didRemoveRTISupplementalLexiconWithIdentifier:(unsigned long long)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentDidChange:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentTraitsDidChange:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 performInputOperation:(id)a1;
- (void)remoteTextInputSessionWithID:(id)a0 performInputOperation:(id)a1 withResponse:(id /* block */)a2;
- (oneway void)remoteTextInputSessionWithID:(id)a0 textSuggestionsChanged:(id)a1;
- (void)_queue_sessionWithID:(id)a0 didAddRTISupplementalLexicon:(id)a1;
- (void)_queue_sessionWithID:(id)a0 didAddSupplementalLexicon:(id)a1;
- (void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id /* block */)a0;
- (void)didInitializeWithConnection:(id)a0;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0;
- (void)flushOperationsWithResultHandler:(id /* block */)a0;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didAddSupplementalLexicon:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didChangePause:(BOOL)a1 withReason:(id)a2;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didRemoveSupplementalLexiconWithIdentifier:(unsigned long long)a1;

@end
