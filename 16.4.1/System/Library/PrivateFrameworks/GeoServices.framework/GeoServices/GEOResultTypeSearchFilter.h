@interface GEOResultTypeSearchFilter : NSObject <GEOSearchFilter>

@property (readonly, nonatomic) unsigned long long types;

- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithResultTypes:(unsigned long long)a0;

@end
