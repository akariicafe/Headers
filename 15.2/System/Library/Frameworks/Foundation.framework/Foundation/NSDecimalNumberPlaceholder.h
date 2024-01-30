@interface NSDecimalNumberPlaceholder : NSDecimalNumber

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithString:(id)a0;
- (id)initWithBool:(BOOL)a0;
- (id)initWithMantissa:(unsigned long long)a0 exponent:(short)a1 isNegative:(BOOL)a2;
- (id)initWithLongLong:(long long)a0;
- (unsigned long long)retainCount;
- (id)initWithUnsignedShort:(unsigned short)a0;
- (id)initWithLong:(long long)a0;
- (id)retain;
- (id)initWithUnsignedLong:(unsigned long long)a0;
- (id)initWithDecimal:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })a0;
- (id)autorelease;
- (id)initWithShort:(short)a0;
- (id)initWithUnsignedInteger:(unsigned long long)a0;
- (id)initWithInt:(int)a0;
- (id)init;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)initWithUnsignedChar:(unsigned char)a0;
- (id)initWithInteger:(long long)a0;
- (id)initWithString:(id)a0 locale:(id)a1;
- (id)initWithDouble:(double)a0;
- (id)initWithFloat:(float)a0;
- (oneway void)release;
- (id)initWithChar:(char)a0;
- (id)initWithUnsignedInt:(unsigned int)a0;
- (id)initWithUnsignedLongLong:(unsigned long long)a0;

@end
