@class GPBMessage, NSMutableDictionary;

@interface GPBInt64Int64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)removeAll;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)setInt64:(long long)a0 forKey:(long long)a1;
- (unsigned long long)hash;
- (void)dealloc;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (id)initWithInt64s:(const long long *)a0 forKeys:(const long long *)a1 count:(unsigned long long)a2;
- (void)enumerateKeysAndInt64sUsingBlock:(id /* block */)a0;
- (BOOL)getInt64:(long long *)a0 forKey:(long long)a1;
- (void)removeInt64ForKey:(long long)a0;
- (void)setGPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forGPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;

@end
