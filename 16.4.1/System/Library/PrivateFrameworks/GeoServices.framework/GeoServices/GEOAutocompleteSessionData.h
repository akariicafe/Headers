@class GEOPDAutocompleteSessionData;

@interface GEOAutocompleteSessionData : NSObject {
    double _analyticsShortSessionCreateTime;
}

@property (readonly, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAutoCompleteSessionData:(id)a0;
- (id)updateWithAutoCompleteSessionData:(id)a0;

@end
