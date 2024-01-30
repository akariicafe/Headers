@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBUInt32ObjectDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)objectForKey:(unsigned int)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const unsigned int *)a1 count:(unsigned long long)a2;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeAll;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (unsigned long long)hash;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (id)deepCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isInitialized;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectForKey:(unsigned int)a0;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;

@end
