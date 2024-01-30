@class CARAutomaticDNDStatus, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, IMDAutoReplyDelegate;

@interface IMDCarAutoReplier : NSObject <IMDAutoReplying> {
    id<IMDAutoReplyDelegate> _replyDelegate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CARAutomaticDNDStatus *automaticDNDStatus;
@property (readonly, nonatomic) NSMutableDictionary *propertiesForChatIdentifiers;
@property (weak, nonatomic) id<IMDAutoReplyDelegate> replyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)_isActive;
- (void)dealloc;
- (void)_updateDNDStatus;
- (BOOL)_favoritesContainsParticipants:(id)a0;
- (BOOL)_hasRecentOutgoingMessagesInChat:(id)a0;
- (BOOL)_contactsContainsParticipants:(id)a0;
- (unsigned long long)_autoReplyAudiencePreference;
- (BOOL)_urgentTriggerMatchInText:(id)a0;
- (id)_propertiesForChat:(id)a0;
- (BOOL)_audience:(unsigned long long)a0 allowsRepliesToChat:(id)a1;
- (id)_customizedAutoReplyMessage;
- (void)_handleGeneratedAutoReplyText:(id)a0 forChat:(id)a1;
- (void)_handleReceivedUrgentRequestForMessages:(id)a0;
- (void)processMessages:(id)a0 inChat:(id)a1;

@end
