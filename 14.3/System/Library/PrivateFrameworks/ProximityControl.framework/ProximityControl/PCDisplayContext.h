@class NSURL, NSString;

@interface PCDisplayContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *legacyAttachmentURL;
@property (copy, nonatomic) NSString *legacyBodyText;
@property (copy, nonatomic) NSString *localizedPrimaryAltText;
@property (copy, nonatomic) NSString *localizedSecondaryAltText;
@property (nonatomic) long long interactionBehavior;
@property (nonatomic) long long interactionDirection;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
