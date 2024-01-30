@class NSArray, NSDictionary, CSTopHitQuery;

@interface EMSearchableIndexTopHitsQueryResult : NSObject

@property (retain, nonatomic) CSTopHitQuery *topHitSearchQuery;
@property (copy, nonatomic) NSArray *foundItems;
@property (copy, nonatomic) NSDictionary *foundMatchingHintsByPersistentID;
@property (retain, nonatomic) NSArray *searchableItemIdentifiers;
@property (readonly, nonatomic) NSDictionary *matchingHintsByPersistentID;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithTopHitSearchQuery:(id)a0 foundItems:(id)a1 foundMatchingHintsByPersistentID:(id)a2;
- (long long)rankingIndexForConversationID:(id)a0;
- (long long)rankingIndexForMessageLibraryID:(id)a0;
- (void)userDidInteractWithConversationID:(id)a0;
- (void)userDidInteractWithLibraryIdentifier:(id)a0;

@end
