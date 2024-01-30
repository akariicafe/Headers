@class NSArray;
@protocol EMTopHitSearchQueryable;

@interface EMSearchableIndexTopHitsQueryResult : NSObject

@property (retain, nonatomic) id<EMTopHitSearchQueryable> topHitSearchQuery;
@property (copy, nonatomic) NSArray *foundItems;
@property (retain, nonatomic) NSArray *searchableItemIdentifiers;

+ (id)log;

- (void).cxx_destruct;
- (long long)rankingIndexForMessageLibraryID:(id)a0;
- (long long)rankingIndexForConversationID:(id)a0;
- (id)initWithTopHitSearchQuery:(id)a0 foundItems:(id)a1;
- (void)userDidInteractWithLibraryIdentifier:(id)a0;
- (void)userDidInteractWithConversationID:(id)a0;

@end
