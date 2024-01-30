@class NSArray, NSMutableDictionary, NSMutableSet, NSString, RTIDocumentRequest;
@protocol RTIInputSystemClientDelegate;

@interface RTIInputSystemClient : NSObject <RTIInputSystemSessionResponseProtocol, RTIInputSystemSessionProtocol> {
    unsigned long long _environmentOptions;
    BOOL _isInDealloc;
}

@property (retain, nonatomic) NSMutableDictionary *activeSessions;
@property (retain, nonatomic) NSMutableSet *begunSessionIDs;
@property (retain, nonatomic) NSMutableSet *allowanceRequestors;
@property (retain, nonatomic) NSArray *machNames;
@property (readonly, nonatomic) NSMutableSet *invalidatedServices;
@property (retain, nonatomic) NSMutableDictionary *connections;
@property (retain, nonatomic) NSMutableSet *endpointConnections;
@property (retain, nonatomic) RTIDocumentRequest *defaultDocumentRequest;
@property (readonly, nonatomic, getter=isEnvironmentEnabled) BOOL environmentEnabled;
@property (readonly, nonatomic) unsigned long long currentEnvironmentOptions;
@property (weak, nonatomic) id<RTIInputSystemClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)performTextOperations:(id)a0 resultHandler:(id /* block */)a1;
- (void)addEndpoint:(id)a0;
- (void)beginAllowingRemoteTextInput:(id)a0;
- (void)endAllowingRemoteTextInput:(id)a0;
- (void)dealloc;
- (BOOL)_canResumeConnection;
- (void)removeEndpoint:(id)a0;
- (oneway void)performDocumentRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (oneway void)performTextOperations:(id)a0;
- (oneway void)beginRemoteTextInputSessionWithID:(id)a0 documentTraits:(id)a1 initialDocumentState:(id)a2;
- (oneway void)beginRemoteTextInputSessionWithID:(id)a0 options:(id)a1 documentTraits:(id)a2 initialDocumentState:(id)a3;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0 options:(id)a1;
- (BOOL)hasActiveSessionWithID:(id)a0;
- (id)initWithMachNames:(id)a0;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didAddRTISupplementalLexicon:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didRemoveRTISupplementalLexiconWithIdentifier:(unsigned long long)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentDidChange:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentTraitsDidChange:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 performInputOperation:(id)a1;
- (void)remoteTextInputSessionWithID:(id)a0 performInputOperation:(id)a1 withResponse:(id /* block */)a2;
- (oneway void)remoteTextInputSessionWithID:(id)a0 textSuggestionsChanged:(id)a1;
- (void)setEnvironmentOptions:(unsigned long long)a0 withReason:(id)a1;
- (void)_beginAllActiveSessions;
- (void)_beginAllActiveSessionsForServices:(id)a0;
- (void)_beginAllActiveSessionsForServices:(id)a0 force:(BOOL)a1;
- (void)_beginSessionWithID:(id)a0 forServices:(id)a1;
- (void)_beginSessionWithID:(id)a0 forServices:(id)a1 force:(BOOL)a2 animated:(BOOL)a3;
- (void)_configureConnection:(id)a0 withMachName:(id)a1;
- (void)_didIntializeConnection:(id)a0 withMachName:(id)a1;
- (void)_endAllActiveSessionsAnimated:(BOOL)a0;
- (void)_endAllActiveSessionsForServices:(id)a0 animated:(BOOL)a1;
- (void)_endSessionWithID:(id)a0 forServices:(id)a1 options:(id)a2;
- (void)_initializeConnectionWithMachName:(id)a0;
- (void)_modifyTextEditingAllowedForReason:(id)a0 notify:(BOOL)a1 animated:(BOOL)a2 block:(id /* block */)a3;
- (BOOL)_remoteTextEditingIsAllowed;
- (void)_updateAttributesForSessionWithID:(id)a0;
- (void)_updateTextForSessionWithID:(id)a0;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0;
- (void)enumerateServices:(id)a0 force:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)notifyServiceOfPause:(BOOL)a0 withReason:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didAddSupplementalLexicon:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didRemoveSupplementalLexiconWithIdentifier:(unsigned long long)a1;
- (void)setEnvironmentEnabled:(BOOL)a0 withReason:(id)a1;
- (oneway void)updateDefaultDocumentRequest:(id)a0;

@end
