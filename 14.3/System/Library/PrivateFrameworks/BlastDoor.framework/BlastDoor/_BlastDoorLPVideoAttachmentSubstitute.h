@interface _BlastDoorLPVideoAttachmentSubstitute : _BlastDoorLPVideo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long index;

- (id)initWithCoder:(id)a0;
- (BOOL)_shouldEncodeData;
- (id)initWithVideo:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
