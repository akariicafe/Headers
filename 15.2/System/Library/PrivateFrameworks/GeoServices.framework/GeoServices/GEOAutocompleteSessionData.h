@class GEOPDAutocompleteSessionData;

@interface GEOAutocompleteSessionData : NSObject {
    double _analyticsShortSessionCreateTime;
}

@property (readonly, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;

- (void).cxx_destruct;
- (id)init;
- (id)updateWithAutoCompleteSessionData:(id)a0;
- (id)initWithAutoCompleteSessionData:(id)a0;

@end
