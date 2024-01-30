@class GEOPDAllCollectionsViewResultFilterTypeKeyword, GEORelatedSearchSuggestion;

@interface GEOAllCollectionsViewResultFilterTypeKeyword : NSObject {
    GEOPDAllCollectionsViewResultFilterTypeKeyword *_filterKeywordIdentifier;
}

@property (readonly, nonatomic) GEORelatedSearchSuggestion *searchSuggestion;
@property (readonly, nonatomic) GEOPDAllCollectionsViewResultFilterTypeKeyword *keywordIdentifier;

- (void).cxx_destruct;
- (id)initWithFilterKeywordIdentifier:(id)a0;

@end
