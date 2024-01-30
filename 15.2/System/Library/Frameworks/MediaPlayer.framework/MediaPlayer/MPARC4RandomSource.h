@class NSData;

@interface MPARC4RandomSource : NSObject <MPRandom, NSSecureCoding, NSCopying> {
    struct Arc4State { unsigned int x0; unsigned int x1; char *x2; } *_state;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *seed;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSeed:(id)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
