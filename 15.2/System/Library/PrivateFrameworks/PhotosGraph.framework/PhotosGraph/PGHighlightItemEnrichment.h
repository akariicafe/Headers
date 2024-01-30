@class NSDictionary;
@protocol PGHighlightItemEnrichmentRule;

@interface PGHighlightItemEnrichment : NSObject

@property (readonly, nonatomic) id<PGHighlightItemEnrichmentRule> rule;
@property (readonly, nonatomic) NSDictionary *contextualKeyAssetByHighlighItemUUID;

- (void).cxx_destruct;
- (id)initWithRule:(id)a0 contextualKeyAssetByHighlighItemUUID:(id)a1;
- (void)enrichHighlightItemLists:(id)a0 progressBlock:(id /* block */)a1;

@end
