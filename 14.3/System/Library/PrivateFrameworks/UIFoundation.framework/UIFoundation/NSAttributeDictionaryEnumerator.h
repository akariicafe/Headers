@class NSAttributeDictionary;

@interface NSAttributeDictionaryEnumerator : NSEnumerator {
    NSAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (id)initWithAttributeDictionary:(id)a0;
- (void)dealloc;
- (id)nextObject;

@end
