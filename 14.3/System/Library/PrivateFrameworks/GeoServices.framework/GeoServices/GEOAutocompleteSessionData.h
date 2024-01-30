@class GEOPDAutocompleteSessionData;

@interface GEOAutocompleteSessionData : NSObject {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _analyticsShortSessionId;
}

@property (readonly, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAutoCompleteSessionData:(id)a0;
- (id)updateWithAutoCompleteSessionData:(id)a0;

@end
