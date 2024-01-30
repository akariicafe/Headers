@class GPBMessage, NSMutableDictionary;

@interface GPBInt32UInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)removeAll;
- (id)description;
- (void)setUInt64:(unsigned long long)a0 forKey:(int)a1;
- (BOOL)isEqual:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)getUInt64:(unsigned long long *)a0 forKey:(int)a1;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (id)initWithUInt64s:(const unsigned long long *)a0 forKeys:(const int *)a1 count:(unsigned long long)a2;
- (void)enumerateKeysAndUInt64sUsingBlock:(id /* block */)a0;
- (void)removeUInt64ForKey:(int)a0;
- (void)setGPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forGPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;

@end
