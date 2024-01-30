@interface GEOResultTypeAutocompleteFilter : NSObject <GEOAutocompleteFilter>

@property (readonly, nonatomic) unsigned long long types;

- (id)init;
- (id)initWithResultTypes:(unsigned long long)a0;
- (BOOL)applyToAutocompleteParameters:(id)a0 error:(id *)a1;

@end
