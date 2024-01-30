@class NSArray, _MSMessageAppContext, MSMessage, NSUUID, NSString, NSData;
@protocol MSConversationDelegate;

@interface MSConversation : NSObject

@property (retain, nonatomic) MSMessage *selectedMessage;
@property (retain, nonatomic) NSArray *remoteParticipantIdentifiers;
@property (retain, nonatomic) _MSMessageAppContext *context;
@property (readonly, copy, nonatomic) NSArray *draftAssetArchives;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) NSData *engramID;
@property (readonly, nonatomic) NSString *senderAddress;
@property (readonly, nonatomic) NSString *iMessageLoginID;
@property (readonly, nonatomic) NSArray *recipientAddresses;
@property (weak, nonatomic) id<MSConversationDelegate> delegate;
@property (readonly, nonatomic) NSUUID *localParticipantIdentifier;

+ (id)activeConversation;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_updateWithState:(id)a0;
- (id)senderIdentifier;
- (id)recipientIdentifiers;
- (void)insertSticker:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeAssetArchiveWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithState:(id)a0 context:(id)a1;
- (void)insertMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertMediaAtURL:(id)a0 attributionURL:(id)a1 attributionIcon:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateMessagePayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)unstageAllItems;
- (void)insertMediaAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertImage:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertStickerWithImage:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertStickerWithMediaAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)inputMessagePayload;
- (void)_insertMessage:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_insertMessage:(id)a0 localizedChangeDescription:(id)a1 skipShelf:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_insertText:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_insertAttachment:(id)a0 withAlternateFilename:(id)a1 skipShelf:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_insertRichLink:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_insertSticker:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_insertAssetArchive:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)insertMessage:(id)a0 localizedChangeDescription:(id)a1 completionHandler:(id /* block */)a2;
- (void)insertText:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertAttachment:(id)a0 withAlternateFilename:(id)a1 completionHandler:(id /* block */)a2;
- (void)insertRichLink:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendMessage:(id)a0 localizedChangeDescription:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendText:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendAttachment:(id)a0 withAlternateFilename:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendRichLink:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendSticker:(id)a0 completionHandler:(id /* block */)a1;
- (void)_insertAttachment:(id)a0 adamID:(id)a1 appName:(id)a2 completionHandler:(id /* block */)a3;
- (void)_insertAssetArchive:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendAssetArchive:(id)a0 completionHandler:(id /* block */)a1;
- (void)stageMessage:(id)a0 localizedChangeDescription:(id)a1 completionHandler:(id /* block */)a2;

@end
