@class GPBMessage;

@interface GPBBoolObjectDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {
    GPBMessage *_autocreator;
    id _values[2];
}

@property (readonly, nonatomic) unsigned long long count;

- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)removeAll;
- (id)initWithObjects:(const id *)a0 forKeys:(const BOOL *)a1 count:(unsigned long long)a2;
- (void)removeObjectForKey:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(BOOL)a1;
- (id)deepCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (id)objectForKey:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isInitialized;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)setGPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forGPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;

@end
