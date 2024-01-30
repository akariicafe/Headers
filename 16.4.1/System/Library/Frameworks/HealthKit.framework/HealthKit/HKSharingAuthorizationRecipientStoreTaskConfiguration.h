@class NSArray;

@interface HKSharingAuthorizationRecipientStoreTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) NSArray *sharingAuthorizations;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
