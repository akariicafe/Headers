@class NSProtocolChecker, NSArray;

@interface CKIMDaemonController : IMDaemonController

@property (retain, nonatomic) NSProtocolChecker *protocol;
@property (retain, nonatomic) NSArray *listeners;

+ (id)sharedInstance;
+ (void)beginSimulatingDaemon;

- (void)sendBalloonPayload:(id)a0 attachments:(id)a1 withMessageGUID:(id)a2 bundleID:(id)a3;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0 capabilities:(unsigned int)a1 blockUntilConnected:(BOOL)a2;
- (id)queryController;
- (void)_capabilitiesDidChange;
- (void)blockUntilConnected;
- (id)synchronousRemoteDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0;
- (void)broadcastCloudKitState;
- (void)deleteMessageWithGUIDs:(id)a0 queryID:(id)a1;
- (void)fileTransfer:(id)a0 createdWithProperties:(id)a1;
- (void)markReadForIDs:(id)a0 style:(unsigned char)a1 onServices:(id)a2 messages:(id)a3 clientUnreadCount:(long long)a4 setUnreadCountToZero:(BOOL)a5;
- (void)requestPendingMessages;
- (void)fileTransferRemoved:(id)a0;
- (void)joinChatID:(id)a0 handleInfo:(id)a1 identifier:(id)a2 style:(unsigned char)a3 groupID:(id)a4 lastAddressedHandle:(id)a5 lastAddressedSIMID:(id)a6 joinProperties:(id)a7 account:(id)a8;
- (void)broadcastCloudKitStateAfterFetchingAccountStatus;
- (void)fileTransfer:(id)a0 acceptedWithPath:(id)a1 autoRename:(BOOL)a2 overwrite:(BOOL)a3 options:(long long)a4;
- (void)requestNetworkDataAvailability;
- (void)markAsSpamForIDs:(id)a0 style:(unsigned char)a1 onServices:(id)a2 chatID:(id)a3 queryID:(id)a4 autoReport:(BOOL)a5;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void)fetchCommonCapabilities:(id)a0 fromChatWithGUID:(id)a1 reply:(id /* block */)a2;
- (void)_agentDidLaunchNotification:(id)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
