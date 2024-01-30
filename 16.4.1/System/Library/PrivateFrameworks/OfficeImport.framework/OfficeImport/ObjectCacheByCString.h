@interface ObjectCacheByCString : NSObject {
    struct __CFDictionary { } *_dictionary;
}

- (void)dealloc;
- (id)init;
- (id)getObjectForCStringKey:(char *)a0;
- (void)setObject:(id)a0 forCStringKey:(char *)a1;

@end
