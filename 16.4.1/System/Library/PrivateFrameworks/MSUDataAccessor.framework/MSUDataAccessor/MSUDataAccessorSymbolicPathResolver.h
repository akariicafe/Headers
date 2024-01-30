@class NSMutableDictionary;

@interface MSUDataAccessorSymbolicPathResolver : NSObject {
    NSMutableDictionary *_overrides;
}

+ (id)resolvedSymbol:(id)a0 error:(id *)a1;
+ (id)symbolicPathResolver;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)overrideSymbol:(id)a0 resolvedPath:(id)a1;
- (id)resolve:(id)a0 error:(id *)a1;

@end
