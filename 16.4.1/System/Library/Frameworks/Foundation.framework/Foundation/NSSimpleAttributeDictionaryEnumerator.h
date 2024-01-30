@class NSSimpleAttributeDictionary;

@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator {
    NSSimpleAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (id)nextObject;
- (id)initWithAttributeDictionary:(id)a0;
- (void)dealloc;

@end
