@class NSString, NSDictionary;

@interface IOKRegistryEntry : IOKObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long entryID;
@property (copy, nonatomic) NSDictionary *properties;

+ (id)rootEntry;
+ (id)registryIteratorForPlane:(id)a0 withOptions:(unsigned int)a1 error:(id *)a2;
+ (id)entryFromPath:(id)a0;

- (id)initWithIOObject:(unsigned int)a0;
- (id)propertyForKey:(id)a0;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (id)childIteratorInServicePlaneWithError:(id *)a0;
- (id)parentIteratorInServicePlaneWithError:(id *)a0;
- (id)initWithRegistryEntry:(unsigned int)a0;
- (id)registryIteratorForPlane:(id)a0 withOptions:(unsigned int)a1 error:(id *)a2;
- (id)nameInPlane:(id)a0 error:(id *)a1;
- (id)locationInPlane:(id)a0 error:(id *)a1;
- (id)pathInPlane:(id)a0;
- (id)childIteratorInPlane:(id)a0 error:(id *)a1;
- (id)childIteratorInPlane:(id)a0 error:(id *)a1 withEnumerationBlock:(id /* block */)a2;
- (id)childInPlane:(id)a0 error:(id *)a1;
- (id)parentIteratorInPlane:(id)a0 error:(id *)a1;
- (id)parentIteratorInPlane:(id)a0 error:(id *)a1 withEnumerationBlock:(id /* block */)a2;
- (id)parentEntryInPlane:(id)a0 error:(id *)a1;
- (id)registryIteratorForServicePlaneWithOptions:(unsigned int)a0 error:(id *)a1;
- (id)nameInServicePlaneWithError:(id *)a0;
- (id)locationInServicePlaneWithError:(id *)a0;
- (id)pathInServicePlane;
- (id)searchForPropertyWithKey:(id)a0 inPlane:(id)a1;
- (id)childIteratorInServicePlaneWithError:(id *)a0 enumerationBlock:(id /* block */)a1;
- (id)childInServicePlaneWithError:(id *)a0;
- (id)parentIteratorInServicePlaneWithError:(id *)a0 enumerationBlock:(id /* block */)a1;
- (id)parentEntryInServicePlaneWithError:(id *)a0;
- (BOOL)isAttachedToPlane:(id)a0;

@end
