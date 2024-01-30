@class NSEnumerator;

@interface NAFlatMapEnumerator : NSEnumerator

@property (readonly, nonatomic) NSEnumerator *enumerator;
@property (readonly, copy, nonatomic) id /* block */ map;

- (id)nextObject;
- (id)allObjects;
- (void).cxx_destruct;
- (id)initWithEnumerator:(id)a0 map:(id /* block */)a1;

@end
