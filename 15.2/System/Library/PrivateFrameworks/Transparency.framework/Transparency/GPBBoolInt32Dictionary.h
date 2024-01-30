@class GPBMessage;

@interface GPBBoolInt32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {
    GPBMessage *_autocreator;
    int _values[2];
    BOOL _valueSet[2];
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
- (unsigned long long)hash;
- (void)setInt32:(int)a0 forKey:(BOOL)a1;
- (BOOL)getInt32:(int *)a0 forKey:(BOOL)a1;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (id)initWithInt32s:(const int *)a0 forKeys:(const BOOL *)a1 count:(unsigned long long)a2;
- (void)enumerateKeysAndInt32sUsingBlock:(id /* block */)a0;
- (void)removeInt32ForKey:(BOOL)a0;
- (void)setGPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forGPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;

@end
