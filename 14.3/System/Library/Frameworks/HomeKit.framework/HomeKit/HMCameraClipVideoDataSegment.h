@interface HMCameraClipVideoDataSegment : HMCameraClipVideoSegment

@property (readonly) double duration;
@property (readonly) double timeOffset;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithByteLength:(unsigned long long)a0 byteOffset:(unsigned long long)a1 duration:(double)a2 timeOffset:(double)a3;
- (void)encodeWithCoder:(id)a0;

@end
