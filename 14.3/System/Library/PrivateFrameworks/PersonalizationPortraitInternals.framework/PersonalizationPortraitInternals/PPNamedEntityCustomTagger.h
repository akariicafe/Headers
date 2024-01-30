@class _PASLock, NSDictionary, NSSet;

@interface PPNamedEntityCustomTagger : NSObject {
    _PASLock *_lock;
    NSDictionary *_categoryMapping;
    NSSet *_dynamicCategories;
}

+ (id)sharedInstance;

- (id)initWithFilePath:(id)a0 dynamicCategories:(id)a1 trialWrapper:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateNamedEntitiesInText:(id)a0 addNamedEntity:(id /* block */)a1;
- (void)enumerateNamedEntitiesInText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 addNamedEntity:(id /* block */)a2;
- (void *)_loadTaggerWithDynamicCategories:(id)a0 filePath:(id)a1 trialWrapper:(id)a2;

@end
