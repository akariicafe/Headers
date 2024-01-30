@class NSArray;

@interface EMSearchableItemSearchResult : NSObject

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSArray *snippetData;

- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0 snippetData:(id)a1;

@end
