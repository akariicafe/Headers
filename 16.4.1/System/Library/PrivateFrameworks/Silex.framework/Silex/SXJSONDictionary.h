@class NSDictionary, NSMutableDictionary, NSArray;

@interface SXJSONDictionary : SXJSONObject <NSFastEnumeration>

@property (readonly, nonatomic) id /* block */ objectValueClassBlock;
@property (readonly, nonatomic) id /* block */ valueClassBlock;
@property (readonly, nonatomic) NSDictionary *json;
@property (readonly, nonatomic) NSMutableDictionary *objects;
@property (readonly, nonatomic) NSArray *keys;
@property (readonly, nonatomic) unsigned long long count;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)keyAtIndex:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (id)NSDictionary;
- (id)allObjects;
- (id)JSONRepresentation;
- (id)jsonDictionary;
- (id)description;
- (id)allKeys;
- (void).cxx_destruct;
- (id)initWithValueClassBlock:(id /* block */)a0 objectValueClassBlock:(id /* block */)a1 purgeBlock:(id /* block */)a2 andJSONObject:(id)a3 andVersion:(id)a4;

@end
