@interface TIHardwareKeyboardLayout : TIKeyboardLayout <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long keyboardType;

+ (void)flushLayoutCaches;

- (void)encodeWithCoder:(id)a0;
- (id)_ANSIFrames;
- (id)initWithKeyboardType:(long long)a0;
- (void)addString:(id)a0 forKeyCode:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForKeyCode:(unsigned long long)a0;
- (void)addExactString:(id)a0 forKeyCode:(unsigned long long)a1;
- (id)_JISFrames;
- (id)_ISOFrames;

@end
