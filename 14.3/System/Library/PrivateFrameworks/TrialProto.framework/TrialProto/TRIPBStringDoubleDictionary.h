@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBStringDoubleDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)setDouble:(double)a0 forKey:(id)a1;
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
- (id)initWithDoubles:(const double *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
- (void)enumerateKeysAndDoublesUsingBlock:(id /* block */)a0;
- (BOOL)getDouble:(double *)a0 forKey:(id)a1;
- (void)removeDoubleForKey:(id)a0;

@end
