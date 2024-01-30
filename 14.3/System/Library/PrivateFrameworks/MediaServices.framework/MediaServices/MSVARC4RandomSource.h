@class NSData;

@interface MSVARC4RandomSource : NSObject <MSVRandom, NSSecureCoding, NSCopying> {
    struct Arc4State { unsigned int x0; unsigned int x1; char *x2; } *_state;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *seed;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (id)initWithSeed:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
