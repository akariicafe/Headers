@class GEORelatedSearchSuggestion, NSString, GEOPDDisplayHeaderSubstitute;

@interface GEODisplayHeaderSubstitute : NSObject

@property (retain, nonatomic) GEOPDDisplayHeaderSubstitute *displayHeaderSubstitute;
@property (retain, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion;
@property (readonly, nonatomic) int substituteType;
@property (readonly, nonatomic) NSString *interpretedQuery;

- (void).cxx_destruct;
- (id)initWithPDDisplayHeaderSubstitute:(id)a0;

@end
