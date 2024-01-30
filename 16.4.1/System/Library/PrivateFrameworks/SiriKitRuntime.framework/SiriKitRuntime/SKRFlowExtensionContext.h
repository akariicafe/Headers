@interface SKRFlowExtensionContext : NSExtensionContext <SKRRemoteConversationXPC> {
    void /* unknown type, empty encoding */ overrideFlowExtension;
    void /* unknown type, empty encoding */ overrideSiriKitRuntime;
    void /* unknown type, empty encoding */ overrideExtensionId;
    void /* unknown type, empty encoding */ overrideIntentTopics;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remoteConversationService;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)init;
- (void)resetWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (void)acceptWithInputData:(id)a0 rcId:(id)a1 asrOnDevice:(BOOL)a2 userSpecificInfo:(id)a3 speechPackage:(id)a4 utterance:(id)a5 reply:(id /* block */)a6;
- (void)acceptInitialInputWithInputIdentifier:(id)a0 rcId:(id)a1 asrOnDevice:(BOOL)a2 userSpecificInfo:(id)a3 speechPackage:(id)a4 utterance:(id)a5 reply:(id /* block */)a6;
- (void)canHandleWithInputData:(id)a0 rcId:(id)a1 reply:(id /* block */)a2;
- (void)cancelWithReply:(id /* block */)a0;
- (void)commitWithBridge:(id)a0 reply:(id /* block */)a1;
- (void)drainAsyncWorkWithReply:(id /* block */)a0;
- (void)ensureReadyWithReply:(id /* block */)a0;
- (void)isCorrectableWithReply:(id /* block */)a0;
- (void)isEmptyWithReply:(id /* block */)a0;
- (void)prepareWithBridge:(id)a0 reply:(id /* block */)a1;
- (void)startTurnFromCacheWithExecutionRequestId:(id)a0 bridge:(id)a1 reply:(id /* block */)a2;
- (void)startTurnWithTurnData:(id)a0 bridge:(id)a1 reply:(id /* block */)a2;
- (void)warmupWithRefId:(id)a0 reply:(id /* block */)a1;

@end
