@interface GEOResultTypeSearchFilter : NSObject <GEOSearchFilter>

@property (readonly, nonatomic) unsigned long long types;

- (id)initWithResultTypes:(unsigned long long)a0;
- (id)init;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;

@end
