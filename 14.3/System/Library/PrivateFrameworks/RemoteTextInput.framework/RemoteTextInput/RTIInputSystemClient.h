@class NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol RTIInputSystemClientDelegate;

@interface RTIInputSystemClient : NSObject <RTIInputSystemSessionResponseProtocol, RTIInputSystemSessionProtocol> {
    unsigned long long _environmentOptions;
    BOOL _isInDealloc;
}

@property (retain, nonatomic) NSMutableDictionary *activeSessions;
@property (retain, nonatomic) NSMutableSet *begunSessionIDs;
@property (retain, nonatomic) NSMutableSet *allowanceRequestors;
@property (retain, nonatomic) NSArray *machNames;
@property (retain, nonatomic) NSMutableDictionary *connections;
@property (retain, nonatomic) NSMutableSet *endpointConnections;
@property (readonly, nonatomic, getter=isEnvironmentEnabled) BOOL environmentEnabled;
@property (readonly, nonatomic) unsigned long long currentEnvironmentOptions;
@property (weak, nonatomic) id<RTIInputSystemClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endAllowingRemoteTextInput:(id)a0;
- (oneway void)beginRemoteTextInputSessionWithID:(id)a0 documentTraits:(id)a1 initialDocumentState:(id)a2;
- (void).cxx_destruct;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentTraitsDidChange:(id)a1;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0;
- (void)dealloc;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentDidChange:(id)a1;
- (oneway void)performTextOperations:(id)a0 resultHandler:(id /* block */)a1;
- (void)removeEndpoint:(id)a0;
- (oneway void)performTextOperations:(id)a0;
- (void)setEnvironmentOptions:(unsigned long long)a0 withReason:(id)a1;
- (void)addEndpoint:(id)a0;
- (void)beginAllowingRemoteTextInput:(id)a0;
- (void)_initializeConnection:(id)a0 withMachName:(id)a1;
- (void)_beginAllActiveSessionsForServices:(id)a0;
- (void)_modifyTextEditingAllowedForReason:(id)a0 notify:(BOOL)a1 block:(id /* block */)a2;
- (BOOL)_remoteTextEditingIsAllowed;
- (void)enumerateServices:(id)a0 force:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)_endAllActiveSessionsForServices:(id)a0;
- (void)_beginSessionWithID:(id)a0 forServices:(id)a1;
- (void)_endSessionWithID:(id)a0 forServices:(id)a1;
- (void)_beginAllActiveSessions;
- (void)notifyServiceOfPause:(BOOL)a0 withReason:(id)a1;
- (void)_endAllActiveSessions;
- (void)_updateTextForSessionWithID:(id)a0;
- (void)_updateAttributesForSessionWithID:(id)a0;
- (id)initWithMachNames:(id)a0;
- (void)setEnvironmentEnabled:(BOOL)a0 withReason:(id)a1;

@end
