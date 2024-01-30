@class NSString, GEOPDRelatedSearchSuggestion;

@interface GEORelatedSearchSuggestion : NSObject

@property (retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSString *searchBarDisplayToken;

- (id)_suggestionEntryMetadata;
- (void).cxx_destruct;
- (id)initWithPDRelatedSearchSuggestion:(id)a0;

@end
