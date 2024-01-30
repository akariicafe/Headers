@interface PURemotePasscodePolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isModificationAllowed) BOOL modificationAllowed;
@property (nonatomic) unsigned long long passcodeMinimumLength;

- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
