@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBUInt64EnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) void /* function */ *validationFunc;

- (void)removeEnumForKey:(unsigned long long)a0;
- (BOOL)getEnum:(int *)a0 forKey:(unsigned long long)a1;
- (id)initWithValidationFunction:(void /* function */ *)a0 capacity:(unsigned long long)a1;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateKeysAndRawValuesUsingBlock:(id /* block */)a0;
- (void)addRawEntriesFromDictionary:(id)a0;
- (BOOL)getRawValue:(int *)a0 forKey:(unsigned long long)a1;
- (id)initWithValidationFunction:(void /* function */ *)a0 rawValues:(const int *)a1 forKeys:(const unsigned long long *)a2 count:(unsigned long long)a3;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithValidationFunction:(void /* function */ *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)removeAll;
- (void)enumerateKeysAndEnumsUsingBlock:(id /* block */)a0;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (id)init;
- (void)setRawValue:(int)a0 forKey:(unsigned long long)a1;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (void)setEnum:(int)a0 forKey:(unsigned long long)a1;
- (id)description;
- (id)serializedDataForUnknownValue:(int)a0 forKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1 keyDataType:(unsigned char)a2;

@end
