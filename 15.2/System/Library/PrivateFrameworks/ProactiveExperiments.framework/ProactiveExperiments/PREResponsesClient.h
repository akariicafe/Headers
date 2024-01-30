@class PREXPCClientHelpers;

@interface PREResponsesClient : NSObject <PREResponsesProtocol> {
    PREXPCClientHelpers *_clientHelpers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_remoteObjectProxy;
- (void)preResponseItemsForMessage:(id)a0 maximumResponses:(unsigned long long)a1 conversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 language:(id)a5 recipientHandles:(id)a6 modelFilePath:(id)a7 modelConfigPath:(id)a8 espressoBinFilePath:(id)a9 registerDisplayed:(BOOL)a10 completion:(id /* block */)a11;
- (void)registerResponse:(id)a0 position:(id)a1 isCanned:(BOOL)a2 isUsingQuickResponses:(BOOL)a3 locale:(id)a4 modelConfigPath:(id)a5;

@end
