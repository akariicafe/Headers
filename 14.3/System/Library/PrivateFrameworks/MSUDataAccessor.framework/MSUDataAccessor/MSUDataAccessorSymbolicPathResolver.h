@class NSMutableDictionary;

@interface MSUDataAccessorSymbolicPathResolver : NSObject {
    NSMutableDictionary *_overrides;
}

+ (id)symbolicPathResolver;
+ (id)resolvedSymbol:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)resolve:(id)a0 error:(id *)a1;
- (void)overrideSymbol:(id)a0 resolvedPath:(id)a1;

@end
