@interface ObjectCacheByCString : NSObject {
    struct __CFDictionary { } *_dictionary;
}

- (id)init;
- (void)dealloc;
- (void)setObject:(id)a0 forCStringKey:(char *)a1;
- (id)getObjectForCStringKey:(char *)a0;

@end
