@class NSString, GEORelatedSearchSuggestion;

@interface GEOMapItemChildActionSearch : NSObject

@property (retain, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion;
@property (readonly, nonatomic) NSString *displayString;

- (id)initWithChildActionSearch:(id)a0;
- (void).cxx_destruct;

@end
