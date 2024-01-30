@class CSSearchableIndex;

@interface IMINInteractionUtilities : NSObject

@property (retain, nonatomic) CSSearchableIndex *searchableIndex;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)deleteInteractionsWithChatGUIDs:(id)a0;
- (void)deleteInteractionsWithMessageGUIDs:(id)a0;

@end
