@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBInt32Int32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)addEntriesFromDictionary:(id)a0;
- (void)removeAll;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getInt32:(int *)a0 forKey:(int)a1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (void)setInt32:(int)a0 forKey:(int)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (id)initWithInt32s:(const int *)a0 forKeys:(const int *)a1 count:(unsigned long long)a2;
- (void)enumerateKeysAndInt32sUsingBlock:(id /* block */)a0;
- (void)removeInt32ForKey:(int)a0;

@end
