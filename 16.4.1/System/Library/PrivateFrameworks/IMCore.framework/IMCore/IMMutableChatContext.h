@class NSUUID, NSArray;

@interface IMMutableChatContext : IMChatContext

@property (nonatomic) long long serviceType;
@property (nonatomic) long long filterCategory;
@property (nonatomic, getter=isSpam) BOOL spam;
@property (nonatomic, getter=areSendersUnknown) BOOL sendersUnknown;
@property (nonatomic, getter=hasResponded) BOOL responded;
@property (retain, nonatomic) NSUUID *activeTelephonyConversationUUID;
@property (retain, nonatomic) NSArray *showingEditHistoryForChatItemGUIDs;

+ (id)chatContextForPinnedChat:(id)a0;

- (void)setServiceType:(long long)a0;
- (void)setSpam:(BOOL)a0;
- (void)setActiveTelephonyConversationUUID:(id)a0;
- (void)setFilterCategory:(long long)a0;
- (void)setResponded:(BOOL)a0;
- (void)setSendersUnknown:(BOOL)a0;
- (void)setShowingEditHistoryForChatItemGUIDs:(id)a0;

@end
