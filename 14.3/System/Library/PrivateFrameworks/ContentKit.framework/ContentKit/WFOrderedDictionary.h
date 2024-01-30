@class NSOrderedSet, NSDictionary;

@interface WFOrderedDictionary : NSDictionary

@property (readonly, nonatomic) NSOrderedSet *keys;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (BOOL)supportsSecureCoding;

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)allKeys;
- (unsigned long long)count;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithQueryItems:(id)a0;

@end
