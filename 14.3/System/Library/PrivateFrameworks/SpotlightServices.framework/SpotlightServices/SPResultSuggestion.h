@class SFSearchResult;

@interface SPResultSuggestion : SFSearchSuggestion

@property (retain, nonatomic) SFSearchResult *originalResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (Class)classForKeyedArchiver;
- (id)description;

@end
