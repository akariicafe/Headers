@class GEOPDPublisherViewResultFilterKeyword, GEORelatedSearchSuggestion;

@interface GEOPublisherViewResultFilterKeyword : NSObject {
    GEOPDPublisherViewResultFilterKeyword *_filterKeywordIdentifier;
}

@property (readonly, nonatomic) GEORelatedSearchSuggestion *searchSuggestion;
@property (readonly, nonatomic) GEOPDPublisherViewResultFilterKeyword *keywordIdentifier;

- (id)initWithFilterKeywordIdentifier:(id)a0;
- (void).cxx_destruct;

@end
