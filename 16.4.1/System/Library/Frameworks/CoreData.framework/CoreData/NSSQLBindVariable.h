@class NSPropertyDescription;

@interface NSSQLBindVariable : NSObject {
    int _cd_rc;
    unsigned char _sqlType;
    unsigned int _index;
    unsigned int _flags;
    id _value;
    NSPropertyDescription *_propertyDescription;
    NSPropertyDescription *_tombstonedPropertyDescription;
    long long _int64;
}

- (void)setIndex:(unsigned int)a0;
- (id)retain;
- (id)propertyDescription;
- (unsigned char)sqlType;
- (oneway void)release;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (void)setSQLType:(unsigned char)a0;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (unsigned int)unsignedInt;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (BOOL)_tryRetain;
- (long long)int64;
- (unsigned int)index;
- (void)setTombstonedPropertyDescription:(id)a0;
- (void)dealloc;
- (id)value;
- (id)tombstonedPropertyDescription;
- (BOOL)_isDeallocating;
- (BOOL)allowsCoercion;
- (void)setInt64:(long long)a0;
- (BOOL)hasObjectValue;
- (void)setUnsignedInt:(unsigned int)a0;
- (void)setValue:(id)a0;
- (unsigned long long)retainCount;

@end
