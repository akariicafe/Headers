@class NSArray, GEOAutocompleteSessionData, NSString;

@interface _GEOPlaceSearchCompletion : NSObject <GEOCompletion>

@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) GEOAutocompleteSessionData *sessionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0 traits:(id)a1 sessionData:(id)a2 mapItems:(id)a3;

@end
