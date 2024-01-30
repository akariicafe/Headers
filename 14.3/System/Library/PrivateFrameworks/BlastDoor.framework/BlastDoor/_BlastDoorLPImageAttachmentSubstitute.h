@interface _BlastDoorLPImageAttachmentSubstitute : _BlastDoorLPImage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long index;

- (id)initWithImage:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_shouldEncodeData;
- (void)encodeWithCoder:(id)a0;

@end
