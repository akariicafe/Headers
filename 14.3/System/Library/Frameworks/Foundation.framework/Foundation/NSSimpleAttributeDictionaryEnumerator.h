@class NSSimpleAttributeDictionary;

@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator {
    NSSimpleAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (id)initWithAttributeDictionary:(id)a0;
- (void)dealloc;
- (id)nextObject;

@end
