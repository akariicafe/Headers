@interface SUGradientColorStop : NSObject <NSSecureCoding> {
    double _r;
    double _g;
    double _b;
    double _a;
    double _offset;
    struct CGColor { } *_rawColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double offset;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (struct CGColor { } *)copyCGColor;
- (id)initWithColor:(struct CGColor { } *)a0 offset:(double)a1;

@end
