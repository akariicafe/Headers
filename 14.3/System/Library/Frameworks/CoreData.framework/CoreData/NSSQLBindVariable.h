@class NSPropertyDescription;

@interface NSSQLBindVariable : NSObject {
    int _cd_rc;
    unsigned char _sqlType;
    unsigned int _index;
    unsigned int _flags;
    id _value;
    NSPropertyDescription *_propertyDescription;
    long long _int64;
}

- (void)setSQLType:(unsigned char)a0;
- (void)setIndex:(unsigned int)a0;
- (void)setInt64:(long long)a0;
- (oneway void)release;
- (unsigned int)index;
- (void)setUnsignedInt:(unsigned int)a0;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (unsigned int)unsignedInt;
- (BOOL)_tryRetain;
- (id)value;
- (unsigned long long)retainCount;
- (id)propertyDescription;
- (BOOL)allowsCoercion;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (long long)int64;
- (unsigned char)sqlType;
- (id)retain;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (BOOL)hasObjectValue;
- (void)setValue:(id)a0;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;

@end
