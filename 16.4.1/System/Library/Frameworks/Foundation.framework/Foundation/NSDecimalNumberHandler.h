@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding> {
    unsigned short _scale : 16;
    unsigned char _roundingMode : 3;
    unsigned char _raiseOnExactness : 1;
    unsigned char _raiseOnOverflow : 1;
    unsigned char _raiseOnUnderflow : 1;
    unsigned char _raiseOnDivideByZero : 1;
    unsigned short _unused : 9;
    void *_reserved2;
    void *_reserved;
}

@property (class, readonly) NSDecimalNumberHandler *defaultDecimalNumberHandler;

+ (id)decimalNumberHandlerWithRoundingMode:(unsigned long long)a0 scale:(short)a1 raiseOnExactness:(BOOL)a2 raiseOnOverflow:(BOOL)a3 raiseOnUnderflow:(BOOL)a4 raiseOnDivideByZero:(BOOL)a5;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)roundingMode;
- (id)initWithRoundingMode:(unsigned long long)a0 scale:(short)a1 raiseOnExactness:(BOOL)a2 raiseOnOverflow:(BOOL)a3 raiseOnUnderflow:(BOOL)a4 raiseOnDivideByZero:(BOOL)a5;
- (id)exceptionDuringOperation:(SEL)a0 error:(unsigned long long)a1 leftOperand:(id)a2 rightOperand:(id)a3;
- (id)initWithCoder:(id)a0;
- (short)scale;

@end
