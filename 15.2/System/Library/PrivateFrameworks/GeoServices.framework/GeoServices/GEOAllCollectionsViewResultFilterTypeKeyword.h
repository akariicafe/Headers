@class GEOPDAllCollectionsViewResultFilterTypeKeyword, GEORelatedSearchSuggestion;

@interface GEOAllCollectionsViewResultFilterTypeKeyword : NSObject {
    GEOPDAllCollectionsViewResultFilterTypeKeyword *_filterKeywordIdentifier;
}

@property (readonly, nonatomic) GEORelatedSearchSuggestion *searchSuggestion;
@property (readonly, nonatomic) GEOPDAllCollectionsViewResultFilterTypeKeyword *keywordIdentifier;

- (id)initWithFilterKeywordIdentifier:(id)a0;
- (void).cxx_destruct;

@end
