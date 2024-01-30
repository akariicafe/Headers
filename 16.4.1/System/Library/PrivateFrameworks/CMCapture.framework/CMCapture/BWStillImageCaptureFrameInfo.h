@interface BWStillImageCaptureFrameInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long mainFlags;
@property (readonly, nonatomic) unsigned long long sifrFlags;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMainFlags:(unsigned long long)a0 sifrFlags:(unsigned long long)a1;

@end
