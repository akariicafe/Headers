@class NSAttributeDictionary;

@interface NSAttributeDictionaryEnumerator : NSEnumerator {
    NSAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (id)nextObject;
- (id)initWithAttributeDictionary:(id)a0;
- (void)dealloc;

@end
