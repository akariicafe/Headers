@interface HMCameraClipPosterFrame : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long byteOffset;
@property (readonly) unsigned long long sizeInBytes;
@property (readonly) double timeOffset;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimeOffset:(double)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 byteOffset:(unsigned long long)a3 sizeInBytes:(unsigned long long)a4;
- (void)encodeWithCoder:(id)a0;

@end
