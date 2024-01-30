@class NSString;

@interface NSNumber : NSValue

@property (readonly) struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; } decimalValue;
@property (readonly) char charValue;
@property (readonly) unsigned char unsignedCharValue;
@property (readonly) short shortValue;
@property (readonly) unsigned short unsignedShortValue;
@property (readonly) int intValue;
@property (readonly) unsigned int unsignedIntValue;
@property (readonly) long long longValue;
@property (readonly) unsigned long long unsignedLongValue;
@property (readonly) long long longLongValue;
@property (readonly) unsigned long long unsignedLongLongValue;
@property (readonly) float floatValue;
@property (readonly) double doubleValue;
@property (readonly) BOOL boolValue;
@property (readonly) long long integerValue;
@property (readonly) unsigned long long unsignedIntegerValue;
@property (readonly, copy) NSString *stringValue;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)numberWithInt:(int)a0;
+ (id)numberWithBool:(BOOL)a0;
+ (id)numberWithUnsignedShort:(unsigned short)a0;
+ (id)numberWithDouble:(double)a0;
+ (id)numberWithUnsignedChar:(unsigned char)a0;
+ (id)numberWithUnsignedInteger:(unsigned long long)a0;
+ (id)numberWithFloat:(float)a0;
+ (id)numberWithUnsignedLongLong:(unsigned long long)a0;
+ (id)numberWithUnsignedInt:(unsigned int)a0;
+ (id)numberWithInteger:(long long)a0;
+ (id)numberWithUnsignedLong:(unsigned long long)a0;
+ (id)numberWithLongLong:(long long)a0;
+ (id)numberWithLong:(long long)a0;
+ (BOOL)supportsSecureCoding;
+ (id)numberWithChar:(char)a0;
+ (id)numberWithShort:(short)a0;

- (BOOL)isNSNumber__;
- (long long)_cfNumberType;
- (long long)_reverseCompare:(id)a0;
- (BOOL)isEqualToNumber:(id)a0;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (BOOL)_getCString:(char *)a0 length:(int)a1 multiplier:(double)a2;
- (id)initWithUnsignedChar:(unsigned char)a0;
- (unsigned long long)_cfTypeID;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_allowsDirectEncoding;
- (id)initWithShort:(short)a0;
- (id)initWithUnsignedInteger:(unsigned long long)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithBool:(BOOL)a0;
- (id)description;
- (id)initWithInteger:(long long)a0;
- (id)initWithDouble:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithChar:(char)a0;
- (id)initWithFloat:(float)a0;
- (id)initWithUnsignedLong:(unsigned long long)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)initWithUnsignedShort:(unsigned short)a0;
- (id)initWithLong:(long long)a0;
- (id)initWithUnsignedLongLong:(unsigned long long)a0;
- (id)initWithUnsignedInt:(unsigned int)a0;
- (id)initWithLongLong:(long long)a0;
- (Class)classForCoder;
- (id)initWithInt:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
