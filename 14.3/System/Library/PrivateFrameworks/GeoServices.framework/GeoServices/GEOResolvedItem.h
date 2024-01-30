@class NSString, GEOPDResolvedItem;

@interface GEOResolvedItem : NSObject {
    GEOPDResolvedItem *_resolvedItem;
}

@property (readonly, nonatomic) BOOL hasResultIndex;
@property (readonly, nonatomic) unsigned long long resultIndex;
@property (readonly, nonatomic) NSString *extractedTerm;
@property (readonly, nonatomic) int itemType;

- (void).cxx_destruct;
- (id)initWithResolvedItem:(id)a0;
- (id)initWithAutocompleteResolvedItem:(id)a0;

@end
