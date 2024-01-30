@interface TIKeyboardLayout : NSObject <NSSecureCoding> {
    unsigned long long _count;
    struct _ShortRect { short x0; short x1; short x2; short x3; } *_frames;
    unsigned long long _framesCapacity;
    char *_strings;
    unsigned long long _stringsSize;
    unsigned long long _stringsCapacity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL usesTwoHands;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void)addKeyWithExactString:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)encodeWithCoder:(id)a0;
- (void)addKeyWithString:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithCoder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)ensureFrameCapacity:(unsigned long long)a0;
- (const char *)firstKeyString;
- (unsigned long long)hash;
- (void)enumerateKeysUsingBlock:(id /* block */)a0;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_decodeCGRectForKey:(id)a0 withDecoder:(id)a1;
- (long long)keyContainingPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_encodeCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1 withCoder:(id)a2;
- (void)ensureStringCapacity:(unsigned long long)a0;

@end
