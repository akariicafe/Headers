@class NSMutableArray;

@interface MSCMSMutableAttributeArray : NSMutableArray

@property (retain) NSMutableArray *attributes;
@property struct Attribute { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct Attribute_value { unsigned int x0; struct heim_base_data *x1; } x1; } *encodedAttributes;
@property (retain) NSMutableArray *genericAttributes;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeAttributes:(id)a0;
- (void)removeLastObject;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)reset;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (struct Attribute { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct Attribute_value { unsigned int x0; struct heim_base_data *x1; } x1; } *)encodeAttributesWithError:(id *)a0;
- (id)calculateAttributesWithDigest:(id)a0 error:(id *)a1;
- (id)getAttributesWithType:(id)a0;

@end
