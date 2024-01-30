@class NSArray, IMChat, NSSet;
@protocol CKAttachmentCollectionManagerDelegate;

@interface CKAttachmentCollectionManager : NSObject

@property (retain, nonatomic) NSArray *photosVideosItems;
@property (retain, nonatomic) NSArray *webLinksItems;
@property (retain, nonatomic) NSArray *otherContentsItems;
@property (retain, nonatomic) IMChat *chat;
@property (retain, nonatomic) NSSet *photoTransferGUIDs;
@property (weak, nonatomic) id<CKAttachmentCollectionManagerDelegate> delegate;

- (id)initWithChat:(id)a0;
- (void)updateCollections;
- (void)chatItemsChanged:(id)a0;
- (id)initWithChat:(id)a0 photoTransferGUIDs:(id)a1;
- (id)guidFromChatItem:(id)a0;
- (void)deleteAttachmentItems:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
