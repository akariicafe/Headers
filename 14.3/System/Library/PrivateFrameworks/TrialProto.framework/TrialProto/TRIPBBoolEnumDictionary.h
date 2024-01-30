@class TRIPBMessage;

@interface TRIPBBoolEnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    int _values[2];
    BOOL _valueSet[2];
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) void /* function */ *validationFunc;

- (void)removeAll;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (void)addRawEntriesFromDictionary:(id)a0;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (id)initWithValidationFunction:(void /* function */ *)a0;
- (id)initWithValidationFunction:(void /* function */ *)a0 capacity:(unsigned long long)a1;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (id)serializedDataForUnknownValue:(int)a0 forKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1 keyDataType:(unsigned char)a2;
- (id)initWithValidationFunction:(void /* function */ *)a0 rawValues:(const int *)a1 forKeys:(const BOOL *)a2 count:(unsigned long long)a3;
- (void)enumerateKeysAndRawValuesUsingBlock:(id /* block */)a0;
- (BOOL)getEnum:(int *)a0 forKey:(BOOL)a1;
- (BOOL)getRawValue:(int *)a0 forKey:(BOOL)a1;
- (void)enumerateKeysAndEnumsUsingBlock:(id /* block */)a0;
- (void)setRawValue:(int)a0 forKey:(BOOL)a1;
- (void)removeEnumForKey:(BOOL)a0;
- (void)setEnum:(int)a0 forKey:(BOOL)a1;

@end
