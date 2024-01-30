@class PREXPCClientHelpers;

@interface PREResponsesClient : NSObject <PREResponsesProtocol> {
    PREXPCClientHelpers *_clientHelpers;
}

+ (id)sharedInstance;

- (id)_remoteObjectProxy;
- (id)init;
- (void).cxx_destruct;
- (void)preResponseItemsForMessage:(id)a0 maximumResponses:(unsigned long long)a1 conversationTurns:(id)a2 context:(id)a3 time:(id)a4 language:(id)a5 recipientHandles:(id)a6 modelFilePath:(id)a7 modelConfigPath:(id)a8 espressoBinFilePath:(id)a9 vocabFilePath:(id)a10 registerDisplayed:(BOOL)a11 includeCustomResponses:(BOOL)a12 includeResponsesToRobots:(BOOL)a13 completion:(id /* block */)a14;
- (void)registerResponse:(id)a0 position:(id)a1 isCanned:(BOOL)a2 isUsingQuickResponses:(BOOL)a3 locale:(id)a4 modelConfigPath:(id)a5 vocabPath:(id)a6;

@end
