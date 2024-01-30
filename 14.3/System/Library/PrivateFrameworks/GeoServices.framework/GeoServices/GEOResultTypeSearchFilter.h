@interface GEOResultTypeSearchFilter : NSObject <GEOSearchFilter>

@property (readonly, nonatomic) unsigned long long types;

- (id)init;
- (id)initWithResultTypes:(unsigned long long)a0;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;

@end
