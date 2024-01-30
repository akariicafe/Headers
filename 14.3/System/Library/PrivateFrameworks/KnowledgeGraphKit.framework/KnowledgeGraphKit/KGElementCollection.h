@class NSArray;

@interface KGElementCollection : NSObject

@property (readonly) unsigned long long count;
@property (readonly) id firstObject;
@property (readonly) id lastObject;
@property (readonly, copy) NSArray *allObjects;

- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectAtIndex:(unsigned long long)a0;

@end
