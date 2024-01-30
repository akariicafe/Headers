@class NSObject, NSSet, NSDictionary, NSString, IMDCollaborationNoticeDispatcher, SWHighlightCenter, IMDCollaborationNoticeStore;
@protocol OS_dispatch_queue;

@interface IMDCollaborationNoticeController : NSObject <SWHighlightCenterDelegate, IMDCollaborationNoticeDispatcherDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mappingChatsToHighlightsQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *noticeDataQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *collaborationNoticeDispatcherQueue;
@property (retain, nonatomic) IMDCollaborationNoticeStore *noticeStore;
@property (readonly, nonatomic) SWHighlightCenter *highlightCenter;
@property (retain, nonatomic) NSSet *highlightURLs;
@property (retain, nonatomic) NSDictionary *highlightURLsForChatGUID;
@property (nonatomic) BOOL hasPopulatedHighlightTracking;
@property (readonly, nonatomic) IMDCollaborationNoticeDispatcher *noticeDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)highlightCenterHighlightsDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_handleChatParticipantsDidChange:(id)a0;
- (void)_isShareBearURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissNotice:(id)a0;
- (void)updateNotice:(id)a0;
- (void)_processNotice:(id)a0;
- (void)_updateMappingHighlightsToChats;
- (void)_chatGUIDsForNotice:(id)a0 completionBlock:(id /* block */)a1;
- (void)_chatGUIDsForNoticeURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)_generateParticipantChangeNoticesForChat:(id)a0 highlight:(id)a1 participant:(id)a2 noticeType:(long long)a3 checkedPrivileges:(BOOL)a4 messageGUID:(id)a5;
- (void)_generateParticipantChangeNoticesForChat:(id)a0 highlights:(id)a1 participants:(id)a2 noticeType:(long long)a3;
- (BOOL)_hasAdministrativePrivilegesForHighlight:(id)a0 chatGUID:(id)a1;
- (BOOL)_highlightEligibleForSuggestAddingUser:(id)a0;
- (void)_mapChatGUIDsToHighlight:(id)a0 completionBlock:(id /* block */)a1;
- (void)_shouldPostParticipantChangeNoticesForChat:(id)a0 withParticipants:(id)a1 forNoticeType:(long long)a2;
- (void)broadcastNoticesDidChangeForChatGUIDs:(id)a0;
- (void)dispatcher:(id)a0 didReceiveDismissalReflectionForNoticeGUIDs:(id)a1;
- (void)dispatcher:(id)a0 didReceiveDismissalRequest:(id)a1 fromID:(id)a2;
- (void)dispatcher:(id)a0 didReceiveNotice:(id)a1 fromID:(id)a2;
- (id)noticesForChatGUID:(id)a0;
- (void)receiveHighlightEvent:(id)a0 fromSender:(id)a1 guidString:(id)a2 date:(id)a3;

@end
