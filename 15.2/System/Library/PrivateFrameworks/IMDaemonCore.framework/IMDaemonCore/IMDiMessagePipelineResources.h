@class IMDMessageStore, IMDMessageSuppressionController, IMDMessageFromStorageController, IMDAccount, IMDChatRegistry, IMDRecentsController, IDSService;
@protocol IMDaemonListenerProtocol;

@interface IMDiMessagePipelineResources : NSObject

@property (readonly, nonatomic) IMDAccount *imdAccount;
@property (readonly, nonatomic) IDSService *service;
@property (readonly, nonatomic) IMDMessageStore *messageStore;
@property (readonly, nonatomic) IMDMessageFromStorageController *storageController;
@property (readonly, nonatomic) id<IMDaemonListenerProtocol> broadcaster;
@property (readonly, nonatomic) IMDMessageSuppressionController *messageSuppressionController;
@property (readonly, nonatomic) IMDRecentsController *recentsController;
@property (readonly, nonatomic) IMDChatRegistry *chatRegistry;

- (void).cxx_destruct;
- (id)initWithIMDAccount:(id)a0 service:(id)a1 messageStore:(id)a2 storageController:(id)a3 broadcaster:(id)a4 messageSuppressionController:(id)a5 recentsController:(id)a6 chatRegistry:(id)a7;

@end
