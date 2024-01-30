@class NSMutableDictionary;

@interface FPItemToURLResourcesConverter : NSObject {
    NSMutableDictionary *_gettersByURLKey;
    NSMutableDictionary *_typesByURLKey;
}

+ (id)dictionaryFromItem:(id)a0 requestedKeys:(id)a1;

- (void).cxx_destruct;
- (void)_addHelperMethodsToClass:(Class)a0;
- (void)_cacheImplementedPropertiesForClass:(Class)a0;
- (void)_addMethod:(SEL)a0 toClass:(Class)a1;
- (id)initWithItemClass:(Class)a0;
- (id)_dictionaryFromItem:(id)a0 requestedKeys:(id)a1;

@end
