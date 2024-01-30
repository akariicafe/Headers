@class NSArray, NSMutableArray;

@interface SXJSONArray : SXJSONObject <NSFastEnumeration>

@property (readonly, nonatomic) id /* block */ objectValueClassBlock;
@property (readonly, nonatomic) id /* block */ valueClassBlock;
@property (readonly, nonatomic) NSArray *json;
@property (readonly, nonatomic) NSMutableArray *objects;
@property (readonly, nonatomic) unsigned long long count;

- (id)JSONRepresentation;
- (id)firstObject;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (void).cxx_destruct;
- (id)NSArray;
- (id)initWithValueClassBlock:(id /* block */)a0 objectValueClassBlock:(id /* block */)a1 purgeBlock:(id /* block */)a2 andJSONObject:(id)a3 andVersion:(id)a4;

@end
