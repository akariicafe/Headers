@class NSString;

@interface IMInlineReplyChatItemRules : IMTranscriptChatItemRules <IMChatItemRules>

@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *threadOriginatorMessageGUID;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } threadOriginatorRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_shouldAppendReplyCountIfNeeded;
- (id)_chatItemsWithReplyCountsForNewChatItems:(id)a0 messageItem:(id)a1;
- (id)_filteredChatItemsForNewChatItems:(id)a0;
- (BOOL)_hasEarlierMessagesToLoad;
- (BOOL)_hasRecentMessagesToLoad;
- (BOOL)_shouldAppendReplyContextForItem:(id)a0 previousItem:(id)a1 chatStyle:(unsigned char)a2;
- (BOOL)_shouldAppendServiceForItem:(id)a0 previousItem:(id)a1 chatStyle:(unsigned char)a2;
- (BOOL)_shouldShowReportSpamForChat:(id)a0 withItems:(id)a1;
- (BOOL)_supportsContiguousChatItems;
- (id)initWithChat:(id)a0 threadIdentifier:(id)a1;

@end
