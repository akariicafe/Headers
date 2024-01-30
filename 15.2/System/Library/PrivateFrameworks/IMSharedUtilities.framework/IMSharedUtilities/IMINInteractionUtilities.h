@class CSSearchableIndex;

@interface IMINInteractionUtilities : NSObject

@property (retain, nonatomic) CSSearchableIndex *searchableIndex;

+ (id)sharedInstance;

- (id)init;
- (void)deleteInteractionsWithChatGUIDs:(id)a0;
- (void)deleteInteractionsWithMessageGUIDs:(id)a0;
- (void)dealloc;

@end
