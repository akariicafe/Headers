@interface SUInstallOptions : SUOptionsBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isManaged) BOOL managed;
@property (nonatomic, getter=isDarkBoot) BOOL darkBoot;
@property (nonatomic, getter=isRequired) BOOL required;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
