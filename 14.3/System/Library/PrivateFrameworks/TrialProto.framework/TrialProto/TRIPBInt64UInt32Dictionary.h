@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBInt64UInt32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)addEntriesFromDictionary:(id)a0;
- (void)removeAll;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (id)initWithUInt32s:(const unsigned int *)a0 forKeys:(const long long *)a1 count:(unsigned long long)a2;
- (void)enumerateKeysAndUInt32sUsingBlock:(id /* block */)a0;
- (BOOL)getUInt32:(unsigned int *)a0 forKey:(long long)a1;
- (void)setUInt32:(unsigned int)a0 forKey:(long long)a1;
- (void)removeUInt32ForKey:(long long)a0;

@end
