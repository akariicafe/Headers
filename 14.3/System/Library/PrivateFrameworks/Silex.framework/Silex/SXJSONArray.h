@class NSArray, NSMutableArray;

@interface SXJSONArray : SXJSONObject <NSFastEnumeration>

@property (readonly, nonatomic) id /* block */ objectValueClassBlock;
@property (readonly, nonatomic) id /* block */ valueClassBlock;
@property (readonly, nonatomic) NSArray *json;
@property (readonly, nonatomic) NSMutableArray *objects;
@property (readonly, nonatomic) unsigned long long count;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)firstObject;
- (id)lastObject;
- (void).cxx_destruct;
- (id)description;
- (id)NSArray;
- (id)JSONRepresentation;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithValueClassBlock:(id /* block */)a0 objectValueClassBlock:(id /* block */)a1 purgeBlock:(id /* block */)a2 andJSONObject:(id)a3 andVersion:(id)a4;

@end
