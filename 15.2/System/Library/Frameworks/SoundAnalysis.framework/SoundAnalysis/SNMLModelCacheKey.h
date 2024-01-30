@class NSArray;

@interface SNMLModelCacheKey : NSObject <NSCopying> {
    NSArray *_keys;
}

- (id)initWithKeys:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToModelCacheKey:(id)a0;
- (id)initWithModelClass:(Class)a0 modelConfiguration:(id)a1;

@end
