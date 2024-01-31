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

- (id)propertyDescription;
- (void)setIndex:(unsigned int)a0;
- (id)retain;
- (void)setSQLType:(unsigned char)a0;
- (void)dealloc;
- (unsigned char)sqlType;
- (unsigned long long)retainCount;
- (unsigned int)index;
- (void)setTombstonedPropertyDescription:(id)a0;
- (void)setInt64:(long long)a0;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (BOOL)_tryRetain;
- (unsigned int)unsignedInt;
- (BOOL)hasObjectValue;
- (BOOL)_isDeallocating;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;
- (id)value;
- (long long)int64;
- (id)tombstonedPropertyDescription;
- (void)setUnsignedInt:(unsigned int)a0;
- (BOOL)allowsCoercion;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (oneway void)release;
- (void)setValue:(id)a0;

@end
