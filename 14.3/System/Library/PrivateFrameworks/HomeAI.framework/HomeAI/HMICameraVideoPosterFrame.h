@class NSData;

@interface HMICameraVideoPosterFrame : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *data;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeOffset;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0 timeOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 width:(unsigned long long)a2 height:(unsigned long long)a3;

@end
