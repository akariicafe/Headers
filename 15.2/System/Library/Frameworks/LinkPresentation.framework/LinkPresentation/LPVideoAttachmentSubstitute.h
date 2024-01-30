@interface LPVideoAttachmentSubstitute : LPVideo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long index;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isSubstitute;
- (id)initWithVideo:(id)a0;

@end
