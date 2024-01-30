@class NSString, IMChat, NSArray, NSDate, NSMutableArray;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules> {
    IMChat *_chat;
    NSArray *_items;
    NSMutableArray *_chatItems;
    NSDate *_nextStaleTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)testShouldShowReportSpamForChat:(id)a0 items:(id)a1;
+ (BOOL)testShouldShowSMSSpamForChat:(id)a0 items:(id)a1;
+ (BOOL)testShouldAppendNumberChanged:(id)a0 previousItem:(id)a1 showAllChanges:(BOOL)a2;

- (BOOL)__im_ff_commSafetyUIEnabled;
- (id)_items;
- (id)inlineReplyController;
- (void).cxx_destruct;
- (void)_setItems:(id)a0;
- (id)_chatItems;
- (BOOL)shouldShowRaiseMessageStatus;
- (id)_initWithChat:(id)a0;
- (void)_setNextStaleTime:(id)a0;
- (id)_nextStaleTime;
- (id)_chatItemsForItem:(id)a0 previousItem:(id)a1;
- (BOOL)_shouldRegenerateChatItemsForItem:(id)a0 previousItem:(id)a1 oldPreviousItem:(id)a2;
- (void)_didProcessChatItems:(id)a0;
- (BOOL)_shouldReloadChatItem:(id)a0 oldChatItem:(id)a1;
- (BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)a0 oldAssociatedChatItems:(id)a1;
- (id)_itemWithChatItemsDeleted:(id)a0 fromItem:(id)a1 indexesOfItemsDeleted:(id *)a2 indexToRangeMapOfItemsDeleted:(id *)a3;
- (void)_invalidateSpamIndicatorCachedValues;
- (BOOL)_supportsContiguousChatItems;
- (BOOL)_hasEarlierMessagesToLoad;
- (BOOL)_hasRecentMessagesToLoad;
- (id)_filteredChatItemsForNewChatItems:(id)a0;
- (BOOL)_shouldAppendDateForItem:(id)a0 previousItem:(id)a1;
- (BOOL)_shouldAppendServiceForItem:(id)a0 previousItem:(id)a1 chatStyle:(unsigned char)a2;
- (BOOL)_shouldShowReportSpamForChat:(id)a0 withItems:(id)a1;
- (BOOL)_shouldAppendReplyContextForItem:(id)a0 previousItem:(id)a1 chatStyle:(unsigned char)a2;
- (BOOL)_shouldAppendReplyCountIfNeeded;
- (id)testChatItems;
- (id)_chatItemsWithReplyCountsForNewChatItems:(id)a0 parentItem:(id)a1 threadOriginatorItem:(id)a2;
- (id)chatItemForIMChatItem:(id)a0;
- (id)_replyCountChatItemForChatItem:(id)a0 parentItem:(id)a1 threadIdentifier:(id)a2 replyMessageGUID:(id)a3 replyIsFromMe:(BOOL)a4 threadOriginatorMessageItem:(id)a5;
- (id)_getCurrentChatSubscriptionLabel;
- (BOOL)shouldShowExpressiveMessageTextAsText:(id)a0;
- (BOOL)_shouldShowEffectPlayButtonForMessage:(id)a0;
- (id)_replyCountChatItemForChatItem:(id)a0 parentItem:(id)a1 threadOriginatorMessageItem:(id)a2;
- (void)_processChatItemsForBreadcrumbs:(id)a0;
- (BOOL)_shouldAdjustNewDeliveredItemIndex:(long long)a0 chatItems:(id)a1;
- (id)_updateOrRemoveDeliveredStatusItemMovingFromOldIndex:(long long)a0 chatItems:(id)a1;
- (id)_newDeliveredChatItemWithStatusType:(long long)a0 atIndex:(long long)a1 chatItems:(id)a2;
- (BOOL)_shouldShowBlockContactForChat:(id)a0 withItems:(id)a1;
- (BOOL)_updateAggregateAttachmentMessagePartAssociatedItems:(id)a0 map:(id)a1;
- (void)_processChatItemsForReplayButton:(id)a0;
- (void)_processChatItemsForAttribution:(id)a0;
- (void)_processChatItemsForUnavailabilityIndicator:(id)a0;
- (void)_manageMomentShareAndAggregateItemsForChatItems:(id)a0;
- (BOOL)_shouldDisplayAttributionInfo:(id)a0;
- (long long)_lastItemIndexExcludingWatchReplyOptions:(id)a0;
- (id)_effectControlForChatItem:(id)a0;
- (void)addChatItem:(id)a0 toChatItemsAtEndButBeforeWatchReplyItems:(id)a1;
- (id)_attributionChatItemForChatItem:(id)a0;

@end
