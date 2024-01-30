@class NSOrderedSet, NSDictionary;

@interface WFOrderedDictionary : NSDictionary

@property (readonly, nonatomic) NSOrderedSet *keys;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (BOOL)supportsSecureCoding;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)allKeys;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)init;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithQueryItems:(id)a0;

@end
