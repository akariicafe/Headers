@class NSMutableDictionary, NSString, EMRemoteConnection, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EMInteractionLogger : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) EMRemoteConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateTrackingQueue;
@property (retain, nonatomic) NSMutableDictionary *viewedMessages;
@property (retain, nonatomic) NSMutableDictionary *messageListMessages;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } messageListVisibleRows;
@property BOOL appLaunched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;

- (id)initWithRemoteConnection:(id)a0;
- (id)messageListTypeForMailboxes:(id)a0;
- (id)_rescopedMessageObjectID:(id)a0;
- (void)messageListDisplayEndedForListItem:(id)a0 cellStyle:(id)a1;
- (void).cxx_destruct;
- (void)applicationLaunched;
- (void)_viewingEndedForAllMessages;
- (void)viewingEndedForMessage:(id)a0;
- (void)_appDidEnterBackground;
- (void)clickedLinkInMessage:(id)a0 scheme:(id)a1;
- (void)_appWillEnterForeground;
- (id)_stateForObjectID:(id)a0 container:(id)a1;
- (void)composeFowardStartedForMessage:(id)a0;
- (void)_logMessageListDisplayEndedForState:(id)a0 now:(id)a1;
- (void)_xpcLogEvent:(id)a0 date:(id)a1 data:(id)a2;
- (void)composeReplyStartedForMessage:(id)a0;
- (void)messageListDisplayStartedForListItem:(id)a0 messageListType:(id)a1 row:(long long)a2 cellStyle:(id)a3;
- (void)scrolledToEndOfMessage:(id)a0;
- (void)viewingStartedForMessage:(id)a0 messageListScope:(id)a1;
- (void)_xpcLogEvent:(id)a0 date:(id)a1 messageID:(id)a2 data:(id)a3;
- (void)_logMessageListDisplayStartedMessageID:(id)a0 now:(id)a1 type:(id)a2 row:(long long)a3 cellStyle:(id)a4;
- (void)messageListDisplayEndedForAllListItems;

@end
