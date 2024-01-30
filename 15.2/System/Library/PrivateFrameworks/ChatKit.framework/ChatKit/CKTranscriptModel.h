@class NSArray, NSDictionary, NSDiffableDataSourceSnapshot, CKConversation;
@protocol CKTranscriptModelDelegate;

@interface CKTranscriptModel : NSObject

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) NSArray *chatItems;
@property (retain, nonatomic) NSDictionary *supplementaryKindToChatItemMap;
@property (weak, nonatomic) id<CKTranscriptModelDelegate> delegate;
@property (readonly, copy, nonatomic) NSDiffableDataSourceSnapshot *snapshot;

+ (id)transcriptSectionIdentifier;

- (void)reload;
- (id)chatItemsWithIMChatItems:(id)a0;
- (id)chatItemWithIMChatItem:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0 delegate:(id)a1;

@end
