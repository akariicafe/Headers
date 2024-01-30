@class NSArray;

@interface KGArrayBasedElementCollection : KGElementCollection

@property (readonly) NSArray *elements;

- (id)firstObject;
- (id)lastObject;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (unsigned long long)count;
- (id)allObjects;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithElements:(id)a0;

@end
