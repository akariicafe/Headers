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

- (void)composeReplyStartedForMessage:(id)a0;
- (void)_appWillEnterForeground;
- (void)applicationLaunched;
- (void)composeFowardStartedForMessage:(id)a0;
- (void).cxx_destruct;
- (void)viewingEndedForMessage:(id)a0;
- (void)scrolledToEndOfMessage:(id)a0;
- (void)_viewingEndedForAllMessages;
- (void)clickedLinkInMessage:(id)a0 scheme:(id)a1;
- (void)_logMessageListDisplayEndedForState:(id)a0 now:(id)a1;
- (id)initWithRemoteConnection:(id)a0;
- (void)_appDidEnterBackground;
- (id)_rescopedMessageObjectID:(id)a0;
- (void)_xpcLogEvent:(id)a0 date:(id)a1 messageID:(id)a2 data:(id)a3;
- (id)_stateForObjectID:(id)a0 container:(id)a1;
- (void)_logMessageListDisplayStartedMessageID:(id)a0 now:(id)a1 type:(id)a2 row:(long long)a3 cellStyle:(id)a4;
- (void)_xpcLogEvent:(id)a0 date:(id)a1 data:(id)a2;
- (void)messageListDisplayEndedForAllListItems;
- (void)viewingStartedForMessage:(id)a0 messageListScope:(id)a1;
- (void)messageListDisplayStartedForListItem:(id)a0 messageListType:(id)a1 row:(long long)a2 cellStyle:(id)a3;
- (void)messageListDisplayEndedForListItem:(id)a0 cellStyle:(id)a1;
- (id)messageListTypeForMailboxes:(id)a0;

@end
