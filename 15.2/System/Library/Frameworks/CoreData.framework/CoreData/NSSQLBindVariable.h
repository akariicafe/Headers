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
- (unsigned int)index;
- (id)tombstonedPropertyDescription;
- (unsigned char)sqlType;
- (void)setValue:(id)a0;
- (BOOL)allowsCoercion;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (id)propertyDescription;
- (unsigned long long)retainCount;
- (void)setUnsignedInt:(unsigned int)a0;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (long long)int64;
- (id)retain;
- (id)value;
- (BOOL)hasObjectValue;
- (BOOL)_isDeallocating;
- (void)setInt64:(long long)a0;
- (void)setSQLType:(unsigned char)a0;
- (unsigned int)unsignedInt;
- (void)setTombstonedPropertyDescription:(id)a0;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
